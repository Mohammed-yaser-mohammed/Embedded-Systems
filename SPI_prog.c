/*
 * SPI_prog.c
 *
 *  Created on: Sep 9, 2019
 *      Author: Administrator
 */
#include <avr/io.h>
#include <util/delay.h>
#include<stdio.h>
#include "std_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "LCD_int.h"
#include "SW_int.h"
#include"avr/delay.h"

#include "SPI_config.h"
#include "SPI_Int.h"


void SPI_Initialize(void)
{
	SPCR=0b00000000;
	SET_BIT(SPCR,6);

#if(SPI_INTERRUPT==ENABLE)
	SET_BIT(SPCR,7);
#elif(SPI_INTERRUPT==DISABLE)
	CLEAR_BIT(SPCR,7);
#endif

#if(DATA_ORDER==LSB)
	SET_BIT(SPCR,5);
#elif(DATA_ORDER==MSB)
	CLEAR_BIT(SPCR,5);
#endif

#if(SPI_MODE == MASTER)
	SET_BIT(SPCR,4);
#elif(SPI_MODE == SLAVE)
	CLEAR_BIT(SPCR,4);
#endif

#if(CLK_PHASE == MODE1)
	{CLEAR_BIT(SPCR,2);CLEAR_BIT(SPCR,3);}
#elif(CLK_PHASE == MODE1)
	{SET_BIT(SPCR,2);CLEAR_BIT(SPCR,3);}
#elif(CLK_PHASE == MODE1)
	{SET_BIT(SPCR,3);CLEAR_BIT(SPCR,2);}
#elif(CLK_PHASE == MODE1)
	{SET_BIT(SPCR,2);SET_BIT(SPCR,3);}
#endif


#if(CLK_FREQ==CLK_FREQ_16)
	{SET_BIT(SPCR,0);CLEAR_BIT(SPCR,1);CLEAR_BIT(SPSR,0);}
#elif(CLK_FREQ==CLK_FREQ_4)
	{CLEAR_BIT(SPCR,0);CLEAR_BIT(SPCR,1);CLEAR_BIT(SPSR,0);}
#elif(CLK_FREQ==CLK_FREQ_64)
	{SET_BIT(SPCR,1);CLEAR_BIT(SPCR,0);CLEAR_BIT(SPSR,0);}
#elif(CLK_FREQ==CLK_FREQ_128)
	{SET_BIT(SPCR,0);SET_BIT(SPCR,1);CLEAR_BIT(SPSR,0);}
#endif

}


void SPI_MASTER_Send(u8 data)
{
	SPDR = data;
//	while(!(SPSR & (1<<SPIF)));
}

u8 SPI_MASTER_Recieve(void)
{
	SPI_MASTER_Send(0xff);
	//while(!(SPSR & (1<<SPIF)));
	return SPDR;
}

u8 SPI_SLAVE_Recieve(void)
{
	//while(!(SPSR & (1<<SPIF)));
 return SPDR;
}

void SPI_SLAVE_Send(u8 data)
{
	SPDR=data;
}

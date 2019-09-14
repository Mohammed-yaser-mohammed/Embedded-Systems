/*
 * PWM_prog.c
 *
 *  Created on: Sep 11, 2019
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
#include "LCD_int.h"
#include "KP_int.h"
#include "KP_config.h"
#include "GLOBAL_INTERRUPT_INT.h"
#include "EXTERNAL_INTERRUPT_INT.h"
#include "UART_init.h"
#include "SPI_config.h"
#include "SPI_Int.h"
#include "BLUETOOTH_MODULE.h"
#include "Car_config.h"
#include "Car_int.h"

void PWM_intialize(void)
{
TCCR0=0x69;
TCCR2 = 0x69;

}

void PWM_OC0_Set_DutyCycle(u8 DC)
{
	OCR0 =((DC*256)/100)-1;
}

void PWM_OC2_Set_DutyCycle(u8 DC)
{
	OCR0 =((DC*256)/100)-1;
}

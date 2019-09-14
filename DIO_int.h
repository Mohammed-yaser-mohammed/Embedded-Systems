/*
 * DIO_Int.h
 *
 *  Created on: Apr 24, 2019
 *      Author: salsa
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_


#define DIO_HIGH 1
#define DIO_LOW  0

void DIO_voidInitialize(void);
void DIO_voidSetPin(u8 pin);
void DIO_voidClearPin(u8 pin);
void DIO_voidWriteOnPin(u8 pin,u8 value);
void DIO_voidTogglePin(u8 pin);
void DIO_voidBlinkPin(u8 pin, u16 time);
void DIO_voidSetPort(s8 PORT);
void DIO_voidClearPort(s8 PORT);
void DIO_voidTogglePort(s8 PORT);
u8 DIO_uint8PinState(u8 pin);
void DIO_voidDisplayPORT(s8 PORT);
/*
#define DDRA   * ((volatile u8*)0x00)
#define DATA_A_IN   * ((volatile u8*)0x01)
#define DATA_A_OUT  * ((volatile u8*)0x02)

#define DDRB   * ((volatile u8*)0x03)
#define DATA_B_IN   * ((volatile u8*)0x04)
#define DATA_B_OUT  * ((volatile u8*)0x05)

#define DDRC   * ((volatile u8*)0x06)
#define DATA_C_IN   * ((volatile u8*)0x07)
#define DATA_C_OUT  * ((volatile u8*)0x08)

#define DDRD   * ((volatile u8*)0x09)
#define DATA_D_IN   * ((volatile u8*)0x10)
#define DATA_D_OUT  * ((volatile u8*)0x11)

*/
#define DIO_PIN_0 0
#define DIO_PIN_1 1
#define DIO_PIN_2 2
#define DIO_PIN_3 3
#define DIO_PIN_4 4
#define DIO_PIN_5 5
#define DIO_PIN_6 6
#define DIO_PIN_7 7

#define DIO_PIN_8 8
#define DIO_PIN_9 9
#define DIO_PIN_10 10
#define DIO_PIN_11 11
#define DIO_PIN_12 12
#define DIO_PIN_13 13
#define DIO_PIN_14 14
#define DIO_PIN_15 15

#define DIO_PIN_16 16
#define DIO_PIN_17 17
#define DIO_PIN_18 18
#define DIO_PIN_19 19
#define DIO_PIN_20 20
#define DIO_PIN_21 21
#define DIO_PIN_22 22
#define DIO_PIN_23 23

#define DIO_PIN_24 24
#define DIO_PIN_25 25
#define DIO_PIN_26 26
#define DIO_PIN_27 27
#define DIO_PIN_28 28
#define DIO_PIN_29 29
#define DIO_PIN_30 30
#define DIO_PIN_31 31




#endif /* DIO_INT_H_ */

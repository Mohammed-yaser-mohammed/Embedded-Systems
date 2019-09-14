/*
 * SPI_Int.h
 *
 *  Created on: Sep 9, 2019
 *      Author: Administrator
 */

#ifndef SPI_INT_H_
#define SPI_INT_H_

void SPI_Initialize(void);
void SPI_MASTER_Send(u8 data);
void SPI_SLAVE_Send(u8 data);
u8 SPI_MASTER_Recieve(void);
u8 SPI_SLAVE_Recieve(void);


#endif /* SPI_INT_H_ */

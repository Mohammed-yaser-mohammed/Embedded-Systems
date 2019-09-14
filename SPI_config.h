/*
 * SPI_config.h
 *
 *  Created on: Sep 9, 2019
 *      Author: Administrator
 */



#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#define SPI_INTERRUPT ENABLE

// DECIDE the order LSB or MSB
#define DATA_ORDER LSB

//Decide SPI MODE : MASTER or SLAVE
#define SPI_MODE MASTER

//MODE1 -- MODE2 -- MODE3 -- MODE4
#define CLK_PHASE MODE1

//CLK_FREQ_4 -- CLK_FREQ_16 -- CLK_FREQ_64 -- CLK_FREQ_128
#define CLK_FREQ CLK_FREQ_16



#endif /* SPI_CONFIG_H_ */

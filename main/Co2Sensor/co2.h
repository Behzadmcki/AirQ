/*
 * MH_Z19.h
 *
 *  Created on: Dec 26, 2020
 *      Author: M
 */

#ifndef MAIN_CO2SENSOR_CO2_H_
#define MAIN_CO2SENSOR_CO2_H_

#include "myLib.h"

#define TXD_PIN (GPIO_NUM_21) //RX_Co2
#define RXD_PIN (GPIO_NUM_19) //Tx_Co2

#define Co2SensorPacketSize 9

#define Co2SensorUsart UART_NUM_2

void Co2SesnorInit(void);
int Co2ConcentrationRead();

#endif /* MAIN_CO2SENSOR_CO2_H_ */

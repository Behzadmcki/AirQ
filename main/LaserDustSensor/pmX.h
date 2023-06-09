/*
 * ZH03.h
 *
 *  Created on: Dec 28, 2020
 *      Author: M
 */

#ifndef MAIN_LASERDUSTSENSOR_PMX_H_
#define MAIN_LASERDUSTSENSOR_PMX_H_

#include "myLib.h"

#define DustSensor_TXD_PIN (GPIO_NUM_16)
#define DustSensor_RXD_PIN (GPIO_NUM_4)

#define DustSensorQandAPacketSize 9
#define DustSensorinitativePacketSize 24

#define DustSensorUsart UART_NUM_1

typedef enum
{
	initativeUpload,
	QandA
} communicationMode_t;

typedef struct
{
	int pm1Concentration;
	int pm25Concentration;
	int pm10Concentration;
} pmXconcentration_t;

void pmXSesnorInit(void);
pmXconcentration_t pmXConcentrationRead();
void pmXUsartCheck();

#endif /* MAIN_LASERDUSTSENSOR_PMX_H_ */

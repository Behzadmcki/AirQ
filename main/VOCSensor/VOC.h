/*
 * ZP07.h
 *
 *  Created on: Dec 26, 2020
 *      Author: M
 */

#ifndef MAIN_AIRQUALITYSENSOR_AIRQUALITY_H_
#define MAIN_AIRQUALITYSENSOR_AIRQUALITY_H_

#include "myLib.h"

#define sensorOutputA_pin (GPIO_NUM_5)
#define sensorOutputB_pin (GPIO_NUM_18)

typedef enum
{
	cleanAir,
	slightPollutionAir,
	middlePollutionAir,
	heavyPollutionAir

} airPollutionClass;

void vocSensorInit();
airPollutionClass vocSensorRead();

#endif /* MAIN_AIRQUALITYSENSOR_AIRQUALITY_H_ */

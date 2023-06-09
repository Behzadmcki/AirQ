/*
 * ZP07.c
 *
 *  Created on: Dec 26, 2020
 *      Author: M
 */

#include "VOC.h"

void vocSensorInit()
{
	gpio_config_t io_conf;

	//disable interrupt
	io_conf.intr_type = GPIO_INTR_DISABLE;
	//bit mask of the pins, use GPIO4/5 here
	io_conf.pin_bit_mask = 1ULL << sensorOutputA_pin;
	//set as input mode
	io_conf.mode = GPIO_MODE_INPUT;
	//enable pull-up mode
	io_conf.pull_up_en = 0;
	io_conf.pull_down_en = 1;
	//configure GPIO with the given settings
	gpio_config(&io_conf);

	//disable interrupt
	io_conf.intr_type = GPIO_INTR_DISABLE;
	//bit mask of the pins, use GPIO4/5 here
	io_conf.pin_bit_mask = 1ULL << sensorOutputB_pin;
	//set as input mode
	io_conf.mode = GPIO_MODE_INPUT;
	//enable pull-up mode
	io_conf.pull_up_en = 0;
	io_conf.pull_down_en = 1;
	//configure GPIO with the given settings
	gpio_config(&io_conf);
}

airPollutionClass vocSensorRead()
{
	airPollutionClass airPolution = cleanAir;

	int sensorOutput = (gpio_get_level(sensorOutputA_pin) << 1) + (gpio_get_level(sensorOutputB_pin) << 0);

	switch (sensorOutput)
	{
	case 0:
		airPolution = cleanAir;
		printf("Air pollution status: clean air\r\n");
		break;
	case 1:
		airPolution = slightPollutionAir;
		printf("Air pollution status: slight pollution air\r\n");
		break;
	case 2:
		airPolution = middlePollutionAir;
		printf("Air pollution status: middle pollution air\r\n");
		break;
	case 3:
		airPolution = heavyPollutionAir;
		printf("Air pollution status: heavy pollution air\r\n");
		break;
	}
	return airPolution;
}

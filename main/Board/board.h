/*
 * board.h
 *
 *  Created on: Mar 17, 2021
 *      Author: M
 */

#ifndef MAIN_BOARD_BOARD_H_
#define MAIN_BOARD_BOARD_H_

#include "define.h"
#include "internalStorage.h"

#define GPIO_INPUT_IO_0     GPIO_NUM_0
#define GPIO_INPUT_IO_1    	GPIO_NUM_13
#define GPIO_INPUT_PIN_SEL  ((1ULL<<GPIO_INPUT_IO_0) | (1ULL<<GPIO_INPUT_IO_1))
#define ESP_INTR_FLAG_DEFAULT 0

// #define RED_LED_GPIO	 		(GPIO_NUM_25)	//old board
// #define GREEN_LED_GPIO	 		(GPIO_NUM_33)
// #define BLUE_LED_GPIO	 		(GPIO_NUM_26)

#define RED_LED_GPIO	 		(GPIO_NUM_32)	//new board
#define GREEN_LED_GPIO	 		(GPIO_NUM_33)
#define BLUE_LED_GPIO	 		(GPIO_NUM_22)

#define LEDC_HS_TIMER          LEDC_TIMER_1
#define LEDC_HS_MODE           LEDC_LOW_SPEED_MODE

#define RED_LED_CHANNEL		    LEDC_CHANNEL_0
#define GREEN_LED_CHANNEL		LEDC_CHANNEL_1
#define BLUE_LED_CHANNEL		LEDC_CHANNEL_2


#define LEDC_TEST_CH_NUM       (3)
#define LEDC_TEST_DUTY         (4000)
#define LEDC_TEST_FADE_TIME    (3000)

typedef enum
{
	off,
	red,
	green,
	blue,
	yellow,
	orange,
	pink,
	purple,

}ledMode_t;


extern TaskHandle_t intStorageTask_h;
extern QueueHandle_t xQueueLedMode ;

extern void iCareSensorTestTask(void *pvParameters);
extern TaskHandle_t iCareSensorTest_h;

void boardTask(void *pvParameters);


#endif /* MAIN_BOARD_BOARD_H_ */

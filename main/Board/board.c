/*
 * board.c
 *
 *  Created on: Mar 17, 2021
 *      Author: M
 */

#include "board.h"

static const char *TAG = "[[Board Task]]";

TaskHandle_t intStorageTask_h;

static QueueHandle_t gpio_evt_queue = NULL;
QueueHandle_t xQueueLedMode = NULL;

ledc_channel_config_t red_led_channel = {.channel = RED_LED_CHANNEL,
										 .duty = 0,
										 .gpio_num = RED_LED_GPIO,
										 .speed_mode = LEDC_HS_MODE,
										 .hpoint = 0,
										 .timer_sel = LEDC_HS_TIMER};

ledc_channel_config_t green_led_channel = {.channel = GREEN_LED_CHANNEL,
										   .duty = 0,
										   .gpio_num = GREEN_LED_GPIO,
										   .speed_mode = LEDC_HS_MODE,
										   .hpoint = 0,
										   .timer_sel = LEDC_HS_TIMER};

ledc_channel_config_t blue_led_channel = {.channel = BLUE_LED_CHANNEL,
										  .duty = 0,
										  .gpio_num = BLUE_LED_GPIO,
										  .speed_mode = LEDC_HS_MODE,
										  .hpoint = 0,
										  .timer_sel = LEDC_HS_TIMER};

static void IRAM_ATTR gpio_isr_handler(void *arg);
static void gpioInputInit();
static void ledChannelInit();
static void boardLedSet(ledMode_t colour);

void boardTask(void *pvParameters)
{
	ledChannelInit();
	gpioInputInit();
	//create a queue to handle gpio event from isr
	gpio_evt_queue = xQueueCreate(10, sizeof(uint32_t));
	xQueueLedMode = xQueueCreate(5, sizeof(ledMode_t));

	uint32_t io_num;
	ledMode_t ledMode;
	ledMode_t defaultLedMode = off;
	uint8_t c = 0;

	uint8_t io0TimeCnt = 0, io1TimeCnt = 0;
	bool io0_3Sec = false, io1_3Sec = false;

	for (;;)
	{
		if (xQueueReceive(xQueueLedMode, &ledMode, 450))
		{
			ESP_LOGI(TAG, "Led mode: %d", ledMode);
			defaultLedMode = ledMode;
		}

		if (defaultLedMode)
		{
			bool gotColour = false;
			while (!gotColour)
			{
				ledMode_t colour = defaultLedMode >> c;
				if (colour & 1)
				{
					gotColour = true;
					boardLedSet(c);
				}

				c++;
				if (c > 15)
					c = 0;
			}
		}
		else
		{
			boardLedSet(off);
		}

		if (xQueueReceive(gpio_evt_queue, &io_num, 50))
		{
			ESP_LOGI(TAG, "GPIO[%ld] intr", io_num);

			switch (io_num)
			{
			case GPIO_INPUT_IO_0:
				io0TimeCnt = 1;
				break;
			case GPIO_INPUT_IO_1:
				io1TimeCnt = 1;
				break;
			default:
				break;
			}
		}

		// Board Keys Handler

		if (io0TimeCnt)
		{
			if (!gpio_get_level(GPIO_INPUT_IO_0))
				io0TimeCnt++;
			else
				io0TimeCnt = 0;

			if (io0TimeCnt > 6) //6 * 500 ms
			{
				io0TimeCnt = 0;
				io0_3Sec = true;
			}
		}
		if (io1TimeCnt)
		{
			if (!gpio_get_level(GPIO_INPUT_IO_1))
				io1TimeCnt++;
			else
				io1TimeCnt = 0;

			if (io1TimeCnt > 6) //6 * 500 ms
			{
				io1TimeCnt = 0;
				io1_3Sec = true;
			}
		}

		if (io0_3Sec && io1_3Sec)
		{
			ESP_LOGI(TAG, "io0 && io1 3Sec");
			io0_3Sec = false;
			io1_3Sec = false;

			// agar key 0 va 1 hardo 3 sanie negah dashte shavad.
			// type your code here//

			vTaskDelete(BLEMeshServerTask_h);
			xTaskCreate(iCareSensorTestTask, "icare sensor test Task", 4096, NULL, 10 | portPRIVILEGE_BIT, &iCareSensorTest_h);

			ledMode_t ledMode = (1 << green) | (1 << off);
			xQueueSend(xQueueLedMode, &ledMode, (TickType_t)5000);
			//end0//
		}
		else if (io1_3Sec && io0TimeCnt == 0)
		{
			ESP_LOGI(TAG, "io1 3Sec");
			io1_3Sec = false;

			// agar key 1 hardo 3 sanie negah dashte shavad.
			// type your code here//

			// if (nodeInfo.relayFeature)
			// {
			// 	for (int i = 0; i < 2; i++)
			// 	{
			// 		boardLedSet(green);
			// 		task_delay_ms(500);
			// 		boardLedSet(off);
			// 		task_delay_ms(500);
			// 	}
			// 	ESP_LOGW(TAG, "Disabling relay feature for Node...");
			// 	nodeInfo.relayFeature = 0;
			// 	// writeRelayFeatureState();
			// }
			// else
			// {
			// 	for (int i = 0; i < 2; i++)
			// 	{
			// 		boardLedSet(green);
			// 		task_delay_ms(500);
			// 		boardLedSet(blue);
			// 		task_delay_ms(500);
			// 	}
			// 	ESP_LOGW(TAG, "Enabling relay feature for Node...");
			// 	nodeInfo.relayFeature = 1;
			// 	// writeRelayFeatureState();
			// }

			// ESP_LOGW(TAG, "Restarting in 2 seconds ...");
			// task_delay_ms(2000);
			// esp_restart();
			//end0//
		}
		else if (io0_3Sec && io1TimeCnt == 0)
		{
			ESP_LOGI(TAG, "io0 3Sec");
			io0_3Sec = false;

			// agar key 0 hardo 3 sanie negah dashte shavad.
			// type your code here//

			xTaskNotify(BLEMeshServerTask_h, BLEMESH_SERVER_ENABLE_PROVISIONING_NOTIFY, eSetBits);

			//end0//
		}
	}
}

static void IRAM_ATTR gpio_isr_handler(void *arg)
{
	uint32_t gpio_num = (uint32_t)arg;
	xQueueSendFromISR(gpio_evt_queue, &gpio_num, NULL);
}

static void gpioInputInit()
{
	gpio_config_t io_conf;

	//interrupt of rising edge
	io_conf.intr_type = GPIO_INTR_NEGEDGE;
	//bit mask of the pins, use GPIO4/5 here
	io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
	//set as input mode
	io_conf.mode = GPIO_MODE_INPUT;
	//enable pull-up mode
	io_conf.pull_up_en = 0;
	io_conf.pull_down_en = 0;
	gpio_config(&io_conf);

	//install gpio isr service
	gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);
	//hook isr handler for specific gpio pin
	gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void *)GPIO_INPUT_IO_0);
	//hook isr handler for specific gpio pin
	gpio_isr_handler_add(GPIO_INPUT_IO_1, gpio_isr_handler, (void *)GPIO_INPUT_IO_1);
}

static void ledChannelInit()
{
	/*
	 * Prepare and set configuration of timers
	 * that will be used by LED Controller
	 */
	ledc_timer_config_t ledc_timer = {
		.duty_resolution = LEDC_TIMER_8_BIT, // resolution of PWM duty
		.freq_hz = 5000,					 // frequency of PWM signal
		.speed_mode = LEDC_HS_MODE,			 // timer mode
		.timer_num = LEDC_HS_TIMER,			 // timer index
		.clk_cfg = LEDC_AUTO_CLK,			 // Auto select the source clock
	};
	// Set configuration of timer0 for high speed channels
	ledc_timer_config(&ledc_timer);

	/*
	 * Prepare individual configuration
	 * for each channel of LED Controller
	 * by selecting:
	 * - controller's channel number
	 * - output duty cycle, set initially to 0
	 * - GPIO number where LED is connected to
	 * - speed mode, either high or low
	 * - timer servicing selected channel
	 *   Note: if different channels use one timer,
	 *         then frequency and bit_num of these channels
	 *         will be the same
	 */

	// Set LED Controller with previously prepared configuration

	ledc_channel_config(&red_led_channel);
	ledc_channel_config(&green_led_channel);
	ledc_channel_config(&blue_led_channel);

	// Initialize fade service.
	ledc_fade_func_install(0);
}

static void boardLedSet(ledMode_t colour)
{
	switch (colour)
	{
	case off:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 0);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 0);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 0);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case red:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 255);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 0);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 0);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case green:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 0);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 255);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 0);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case blue:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 0);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 0);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 255);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case yellow:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 255);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 255);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 0);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case orange:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 255);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 150);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 50);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case pink:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 255);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 50);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 200);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	case purple:
		ledc_set_duty(red_led_channel.speed_mode, red_led_channel.channel, 150);
		ledc_update_duty(red_led_channel.speed_mode, red_led_channel.channel);

		ledc_set_duty(green_led_channel.speed_mode, green_led_channel.channel, 0);
		ledc_update_duty(green_led_channel.speed_mode, green_led_channel.channel);

		ledc_set_duty(blue_led_channel.speed_mode, blue_led_channel.channel, 255);
		ledc_update_duty(blue_led_channel.speed_mode, blue_led_channel.channel);
		break;
	default:
		break;
	}
}

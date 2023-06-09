/*
 * MHz19.c
 *
 *  Created on: Dec 26, 2020
 *      Author: M
 */

#include "co2.h"

void Co2SesnorInit(void)
{
	const uart_config_t uart_config = {
		.baud_rate = 9600,
		.data_bits = UART_DATA_8_BITS,
		.parity = UART_PARITY_DISABLE,
		.stop_bits = UART_STOP_BITS_1,
		.flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
		.source_clk = UART_SCLK_APB,
	};
	// We won't use a buffer for sending data.
	uart_driver_install(Co2SensorUsart, 1024 * 2, 0, 0, NULL, 0);
	uart_param_config(Co2SensorUsart, &uart_config);
	uart_set_pin(Co2SensorUsart, TXD_PIN, RXD_PIN, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

int sendData(const char *data, uint8_t size)
{
	const int txBytes = uart_write_bytes(Co2SensorUsart, data, size);
	return txBytes;
}

static uint8_t getCheckSum(uint8_t *packet)
{
	uint8_t checksum = 0;

	for (int i = 1; i < 8; i++)
	{
		checksum += packet[i];
	}
	checksum = 0xff - checksum;
	checksum += 1;

	return checksum;
}

int Co2ConcentrationRead()
{

	int co2Concentration = 0;

	uart_flush(Co2SensorUsart);
	const char SensorPacket[Co2SensorPacketSize] = {0xFF, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79};
	uint8_t txBytes = sendData(SensorPacket, Co2SensorPacketSize);

	if (txBytes != Co2SensorPacketSize)
	{
		printf(" Co2 Concentration Status: SENDING PACKET ERROR\r\n");
		return -1;
	}

	uint8_t data[Co2SensorPacketSize], rxBytesNum, bytes_received = 0, rxByte;
	// uint8_t rxBytes = uart_read_bytes(Co2SensorUsart, data, Co2SensorPacketSize, 1000 / portTICK_RATE_MS);

	while (true)
	{
		rxBytesNum = uart_read_bytes(Co2SensorUsart, &rxByte, 1, 1000 / portTICK_PERIOD_MS);
		if (rxBytesNum > 0)
		{
			if (bytes_received == 0 && rxByte != 255)
				continue;

			data[bytes_received] = rxByte;
			bytes_received++;
			if (bytes_received == 9)
			{
				printf("data: %d, %d, %d, %d, %d, %d, %d, %d, %d\r\n",
					   data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8]);
				printf("getCheckSum(data): %d\r\n", getCheckSum(data));
				if (data[8] == getCheckSum(data))
				{
					co2Concentration = ((uint16_t)256 * data[2]) + data[3];
					printf(" Co2 Concentration Status=%d\r\n", co2Concentration);
				}
				else
				{
					printf(" Co2 Concentration Status: CHECKSUM ERROR\r\n");
					return -1;
				}
			}
		}
		else
		{
			printf("CO2 Rx Timeout\r\n");
			if (bytes_received == 9)
				return co2Concentration;
			else
				return -1;
		}
	}

	// if (rxBytes > 0)
	// {
	// 	printf("data: %d, %d, %d, %d, %d, %d, %d, %d, %d\r\n",
	// 		   data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8]);
	// 	printf("getCheckSum(data): %d\r\n", getCheckSum(data));
	// 	if (data[8] == getCheckSum(data))
	// 	{
	// 		co2Concentration = ((uint16_t)256 * data[2]) + data[3];
	// 		printf(" Co2 Concentration Status=%d\r\n", co2Concentration);
	// 	}
	// 	else
	// 	{
	// 		printf(" Co2 Concentration Status: CHECKSUM ERROR\r\n");
	// 		return -1;
	// 	}
	// }
	// else
	// {
	// 	printf(" Co2 Concentration Status:TIMOUT ERROR\r\n");
	// 	return -1;
	// }

	return co2Concentration;
}

/************** UART Example Unused functions ***************/

//static void tx_task(void *arg)
//{
//    static const char *TX_TASK_TAG = "TX_TASK";
//    esp_log_level_set(TX_TASK_TAG, ESP_LOG_INFO);
//    while (1) {
//        sendData(TX_TASK_TAG, "Hello world");
//        vTaskDelay(2000 / portTICK_PERIOD_MS);
//    }
//}

//static void rx_task(void *arg)
//{
//    static const char *RX_TASK_TAG = "RX_TASK";
//    esp_log_level_set(RX_TASK_TAG, ESP_LOG_INFO);
//    uint8_t* data = (uint8_t*) malloc(RX_BUF_SIZE+1);
//    while (1) {
//        const int rxBytes = uart_read_bytes(UART_NUM_1, data, RX_BUF_SIZE, 1000 / portTICK_RATE_MS);
//        if (rxBytes > 0) {
//            data[rxBytes] = 0;
//            ESP_LOGI(RX_TASK_TAG, "Read %d bytes: '%s'", rxBytes, data);
//            ESP_LOG_BUFFER_HEXDUMP(RX_TASK_TAG, data, rxBytes, ESP_LOG_INFO);
//        }
//    }
//    free(data);
//}

//void app_main(void)
//{
//    init();
//    xTaskCreate(rx_task, "uart_rx_task", 1024*2, NULL, configMAX_PRIORITIES, NULL);
//    xTaskCreate(tx_task, "uart_tx_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
//}

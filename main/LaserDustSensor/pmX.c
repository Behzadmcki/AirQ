/*
 * ZH03.c
 *
 *  Created on: Dec 28, 2020
 *      Author: M
 */

#include "pmX.h"

static const char *TAG = "[[ PMx Sensor]]";

static int SendData(uint8_t *data, uint8_t size)
{
	const int txBytes = uart_write_bytes(DustSensorUsart, (const char *)data, size);
	printf("\nWrote %d bytes\n", txBytes);
	return txBytes;
}

static void communicationMode(communicationMode_t mode)
{

	uint8_t sensorPacket[9] = {0xFF, 0x01, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF};

	if (mode == initativeUpload)
	{
		sensorPacket[3] = 0x40;
		sensorPacket[8] = 0x47;
	}
	else
	{
		sensorPacket[3] = 0x41;
		sensorPacket[8] = 0x46;
	}

	SendData(sensorPacket, DustSensorQandAPacketSize);
}

static bool GetCheckSum(uint8_t *packet)
{
	uint16_t checksum = 0x42 + 0x4D + 0x14; //header constant values

	for (int i = 0; i < DustSensorinitativePacketSize - 6; i++)
	{
		checksum += packet[i];
	}

	if (packet[DustSensorinitativePacketSize - 6] == (checksum & 0xFF00) >> 8)
	{

		if (packet[DustSensorinitativePacketSize - 5] == (checksum & 0x00FF))
		{
			return true;
		}
	}

	return false;
}

void pmXSesnorInit(void)
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
	uart_driver_install(DustSensorUsart, 1024 * 2, 0, 0, NULL, 0);
	uart_param_config(DustSensorUsart, &uart_config);
	uart_set_pin(DustSensorUsart, DustSensor_TXD_PIN, DustSensor_RXD_PIN, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);

	// communicationMode(initativeUpload);
}

static bool HeaderDecoder(uint8_t data, uint8_t *index)
{
	if (data == 0x42 && *index == 0)
	{
		*index = 1;
	}
	else if (data == 0x4D && *index == 1)
	{
		*index = 2;
	}
	else if (data == 0x00 && *index == 2)
	{
		*index = 3;
	}
	else if (data == 0x14 && *index == 3)
	{
		*index = 0;
		return true;
	}
	else
	{
		*index = 0;
	}

	return false;

	/******** Q and A ********/

	//	if(data == 0xFF && *index==0)
	//	{
	//		*index=1 ;
	//	}
	//	else if(data == 0x86 && *index==1)
	//	{
	//		*index=0 ;
	//		return true;
	//	}
	//
	//	return false ;
}

pmXconcentration_t pmXConcentrationRead()
{
	pmXconcentration_t pmXconcentraion = {.pm1Concentration = -1, .pm25Concentration = -1, .pm10Concentration = -1};
	uint8_t num = 0;
	uint8_t header = 0;
	uint8_t index = 0;
	bool headerValidation = false;
	bool packetValidation = false;
	uint8_t data[20] = {0};

	int rxBytes = 0;
	uart_flush(DustSensorUsart);

	while (headerValidation == 0)
	{
		rxBytes = uart_read_bytes(DustSensorUsart, &header, 1, 3000 / portTICK_PERIOD_MS);
		headerValidation = HeaderDecoder(header, &index);
		ESP_LOGD(TAG, "rxBytes = %d, data = 0x%x", rxBytes, header);
		if (rxBytes == 0)
		{
			printf(" PmX Concentration Status: TIMEOUT ERROR\r\n");
			return pmXconcentraion;
		}

		if (headerValidation)
		{
			rxBytes = 0;
			rxBytes = uart_read_bytes(DustSensorUsart, data, DustSensorinitativePacketSize - 4, 3000 / portTICK_PERIOD_MS);
			ESP_LOGD(TAG, "rxBytes = %d", rxBytes);

			if (rxBytes != DustSensorinitativePacketSize - 4)
			{
				printf(" PmX Concentration Status: PACKET TIMEOUT\n");
				packetValidation = false;
			}
			else
			{
				for (int i = 0; i < 20; i++)
				{
					ESP_LOGD(TAG, "byte%d = %d", i + 5, data[i]);
				}
				packetValidation = true;
			}
		}
	}

	headerValidation = false;

	if (packetValidation)
	{

		if (GetCheckSum(data))
		{
			pmXconcentraion.pm1Concentration = (uint16_t)256 * data[6] + data[7];
			pmXconcentraion.pm25Concentration = (uint16_t)256 * data[8] + data[9];
			pmXconcentraion.pm10Concentration = (uint16_t)256 * data[10] + data[11];

			printf(" PmX Concentration Status: PM1.0=%d,PM2.5=%d,PM10=%d\r\n", pmXconcentraion.pm1Concentration, pmXconcentraion.pm25Concentration, pmXconcentraion.pm10Concentration);
		}
		else
		{
			printf(" PmX Concentration Status: PmX sensor checkSum Error\r\n");
		}
		packetValidation = false;
	}
	else
	{
		printf(" PmX Concentration Status: packet validation error\r\n");
	}

	return pmXconcentraion;
}

//
//void pmXUsartCheck()
//{
//
//	char txData[30]="\n send me <ok> ! \n"	;
//
//	uint8_t rxData[2] ;
//
//	uart_write_bytes(DustSensorUsart, (const char*)txData, strlen((char*)txData));
//
//	int rxBytes=0 ;
//
//	while(rxBytes==0)
//	{
//		rxBytes = uart_read_bytes(DustSensorUsart, rxData, 2, 1000 / portTICK_RATE_MS);
//	}
//
//	uart_write_bytes(DustSensorUsart, (const char*)rxData,2 );
//}

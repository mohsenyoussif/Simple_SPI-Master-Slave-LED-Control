/*
 * main.c
 *
 *  Created on: 4 Feb 2025
 *      Author: mohse
 */
#include "Platform_Types.h"
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "SPI_interface.h"
#include "util/delay.h"

int main(void)
{
	uint8 ReceivedData = 0 ;
   PORT_voidInit();
   SPI_InitSlave();
	while(1)
	{
		ReceivedData = SPI_uint8Transceve(10);
		_delay_ms(10);
		if(ReceivedData == 1)
		{
			DIO_uint8SetPinValue(DIO_uint8PORTA,DIO_uint8PIN0,1);
		}

	}
	return 0 ;
}


/*
 * main.c
 *
 *  Created on: 4 Feb 2025
 *      Author: mohse
 */
#include "Platform_Types.h"
#include "util/delay.h"
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "SPI_interface.h"


int main(void)
{
   PORT_voidInit();
   SPI_InitMaster();
	while(1)
	{
     SPI_uint8Transceve(1);
     _delay_ms(10);
	}
	return 0 ;
}


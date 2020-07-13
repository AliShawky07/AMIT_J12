/*
 * ADC_Driver.c
 *
 * Created: 09/07/2020 04:48:56 م
 * Author : Ali
 */ 

#include "Temp_Sensor.h"
#include "LCD.h"
#define  F_CPU   16000000
#include <util/delay.h>


int main(void)
{
	
	uint16 Temp = 0;
	
    LCD_Init();
	TempSensor_Init();
	
	
    while (1) 
    {


		TempSensor_Read(&Temp);
		
		 LCD_Clear();
		
		LCD_WriteInteger(Temp);
		
		//s_delay_ms(500);
    }
}


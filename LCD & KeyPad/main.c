/*
 * KeyPad.c
 *
 * Created: 04/07/2020 01:39:01 م
 * Author : Ali
 */ 

#include "LCD.h"
#include "KeyPad.h"
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	uint8 value = 0;
	
	LCD_Init();
	KeyPad_Init();
	
	
    while (1) 
    {
		value = KeyPad_GetValue();
		
		if(value)
		{
			LCD_WriteChar(value);
		}
		

    }
}


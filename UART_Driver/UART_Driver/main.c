/*
 * UART_Driver.c
 *
 * Created: 25/07/2020 08:18:40 ص
 * Author : Ali
 */ 

#include "UART.h"
#include "LCD.h"
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	
	uint8 RX_Data = 0;
    UART_Init();
	
	UART_SendString("hello");
	
	LCD_Init();
	
    while (1) 
    {
		RX_Data = UART_ReceiveChar();
		
		_delay_ms(100);
		
		LCD_WriteChar(RX_Data);
		
    }
}


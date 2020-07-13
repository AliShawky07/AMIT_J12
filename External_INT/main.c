/*
 * GccApplication3.c
 *
 * Created: 09/07/2020 12:59:22 م
 * Author : Ali
 */ 

#include "EXT_INT_ServiceRoutine.h"
#include "LED.h"
#include <avr/interrupt.h>



int main(void)
{
    
    ExternaINT0_Init();
	
	LED0_Init();
	
    while (1) 
    {
		
    }
}




ISR(INT0_vect)
{
	cli();
	LED0_toggle();
	sei();
}

ISR(INT1_vect)
{
	
	
}

ISR(INT2_vect)
{
	
	
}
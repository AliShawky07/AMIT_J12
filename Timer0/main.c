/*
 * Timer0.c
 *
 * Created: 17/07/2020 01:04:39 م
 * Author : Ali
 */ 

#include "Timer.h"
#include "LED.h"





int main(void)
{
    
	
	LED0_Init();
	LED0_ON();
	/*
	TIMER1_SetCallBack(LED0_toggle);
	
	Timer1_Init();
	
	Timer1_SetDelay(3000);
	Timer1_Start();*/
	
	PWM0_Init();
	PWM0_Generate(100);
	PWM0_Start();
	
    while (1) 
    {
		
	
    }
}



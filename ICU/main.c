/*
 * ICU.c
 *
 * Created: 24/07/2020 07:31:21 ص
 * Author : Ali
 */ 

#include "Timer.h"
#include "LCD.h"

extern uint8 Cap_Counter ;
extern uint32 ICU_ReadCapturedVal_1 ;
extern uint32 ICU_ReadCapturedVal_2 ;
extern uint32 ICU_ReadCapturedVal_3 ;


void PWM2_Init(void)
{
	DDRD |= 0X80;
	TCCR2|= 0x6A;
	
}

void PWM2_Generate(uint32 duty_cycle)
{
	
	OCR2 = ((duty_cycle * 256 ) /100 ) ;
	
}

int main(void)
{
   uint32  duty = 0;
   uint32 Freq = 0;
   
  
   
    PWM2_Init();
    PWM2_Generate(60);
	
	
	
	ICU_Init();
	
    LCD_Init();
	
	
    while (1) 
    {
		
		
		if(Cap_Counter == 3)
		{
			duty = ((ICU_ReadCapturedVal_2 - ICU_ReadCapturedVal_1) * 100) / (ICU_ReadCapturedVal_3 - ICU_ReadCapturedVal_1) ;
			
			Freq = 8000000 / (ICU_ReadCapturedVal_3 - ICU_ReadCapturedVal_1) ;
			
			
			LCD_GoTo(0,0);
			LCD_WriteString("Duty Cycle:");
			LCD_WriteInteger(duty);
			LCD_WriteChar('%');
			
			LCD_GoTo(1,0);
			LCD_WriteString("Freq:");
			//LCD_GoTo(1,10);
			LCD_WriteInteger(Freq);
			LCD_WriteString("Hz");
			
			Cap_Counter = 0;
			SET_BIT(TIMSK , 5) ;
		}
		
    }
}


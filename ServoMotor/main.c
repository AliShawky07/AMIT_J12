/*
 * ServoMotor.c
 *
 * Created: 23/07/2020 02:49:23 م
 * Author : Ali
 */ 

#include "Servo.h"


int main(void)
{
	
//ServoMotor_Init();
//ServoMotor_Move(90);
DIO_SetPinDir(DIO_PORTD ,DIO_PIN5, DIO_PIN_OUTPUT);
PWM1_Init();
//PWM1_Start();
PWM1_Generate(10);

    while (1) 
    {
    }
}


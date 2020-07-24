/*
 * DC_Motor.c
 *
 * Created: 23/07/2020 11:22:24 ص
 * Author : Ali
 */ 

#include <avr/io.h>

#include "DC_Motor.h"

int main(void)
{
  
   DcMotor_Init();
   DcMotor_SetDir(CLOCK_WISE_DIR);
   DcMotor_SetSpeed(10);
   DcMotor_SetSpeed(4);
   DcMotor_Start();
   
    while (1) 
    {
    }
}


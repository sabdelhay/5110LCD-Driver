/*
 * LCD5110_driver.c
 *
 * Created: 7/31/2024 4:02:40 PM
 * Author : Sherif Abdelhay
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "DIO.h"
#include "std_macros.h"
#include "LCD5110_driver.h"
#include "SPI_driver.h"
#define F_CPU 8000000UL
#include <util/delay.h>


int main(void)
{
	LCD5110_init();
	_delay_ms(1000);
	
	LCD5110_clear();
	LCD_gotoXY(0, 0);
	
	LCD_string("Hello, 5110 :)");
	
    while (1) 
    {
		
    }
	return 0;
}


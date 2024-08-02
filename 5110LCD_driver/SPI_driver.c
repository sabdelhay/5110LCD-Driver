/*
 * SPI_driver.c
 *
 * Created: 7/31/2024 4:08:57 PM
 *  Author: Sherif Abdelhay
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include "DIO.h"
#include "std_macros.h"
#define F_CPU 8000000UL
#include <util/delay.h>

void spi_master_init(void){
	DIO_setpindir('B',4,1);
	DIO_setpindir('B',5,1);
	DIO_setpindir('B',7,1);
	
	SET_BIT(SPCR, MSTR);
	SET_BIT(SPCR, SPR0);
	SET_BIT(SPCR, SPE);
	
	DIO_write('B', 4, 1);
}

void spi_slave_init(void){
	
	SET_BIT(SPCR, SPE);
	
	DIO_setpindir('B', 6, 1);
}

void spi_master_send(unsigned char data){
	SPDR = data;
	while(READ_BIT(SPSR,SPIF) == 0);
}

unsigned char spi_slave_receive(unsigned char data){
	SPDR = data;
	while(READ_BIT(SPSR,SPIF) == 0);
	
	return SPDR;
}

void spi_master_send_string(unsigned char *str){
	while((*str)!=0){
		spi_master_send(*str);
		_delay_ms(300);
		str++;
	}
}





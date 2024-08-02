/*
 * SPI_driver.h
 *
 * Created: 7/31/2024 4:09:27 PM
 *  Author: Sherif Abdelhay
 */ 


#ifndef SPI_DRIVER_H_
#define SPI_DRIVER_H_

void spi_master_init();
void spi_slave_init();
void spi_master_send(unsigned char data);
unsigned char spi_slave_receive(unsigned char data);
void spi_master_send_string(unsigned char *str);


#endif /* SPI_DRIVER_H_ */
/*
 * _5110_driver.h
 *
 * Created: 7/31/2024 4:05:11 PM
 *  Author: Sherif Abdelhay
 */ 


#ifndef LCD5110_DRIVER_H_
#define LCD5110_DRIVER_H_

#define LCD_PORT	'B'
#define LCD_CE		4
#define LCD_RST		0
#define LCD_DC		1

#define LCD_CMD     0
#define LCD_DATA    1
#define LCD_WIDTH   84
#define LCD_HEIGHT  48

void LCD5110_send(unsigned char data, unsigned char mode);
void LCD5110_init();
void LCD5110_clear();
void LCD_char(char c);
void LCD_string(const char *str);
void LCD_gotoXY(unsigned char x, unsigned char y);



#endif /* LCD5110_DRIVER_H_ */
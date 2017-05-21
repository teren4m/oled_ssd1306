/******
Demo for ssd1306 i2c driver for  Raspberry Pi
******/

#include "ssd1306_i2c.h"
#include <stdio.h>
#include <limits.h>
#include "base.h"

typedef void (*fun1)(int);

#define for_each_range(from, to, fun1) { int i; for(i = from; i <= to; i++) fun1(i); }

void data(int i)
{
    ssd1306_write(50);
}

int main() {

    printf("Size: %d", (SSD1306_LCDWIDTH * SSD1306_LCDHEIGHT / 8));
	ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

	//ssd1306_display(); //Adafruit logo is visible
	//ssd1306_clearDisplay();
	//delay(5000);

	//char* text = "This is demo for SSD1306 i2c driver for Raspberry Pi";
	//ssd1306_drawString(text);
	//ssd1306_display();
	//delay(5000);

	//ssd1306_dim(1);
	//ssd1306_startscrollright(00,0xFF);
	//delay(5000);

	//ssd1306_clearDisplay();
	//ssd1306_fillRect(10,10, 50, 20, WHITE);
	//ssd1306_fillRect(80, 10, 130, 50, WHITE);
	//ssd1306_display();
	//delay(5000);

    ssd1306_clearDisplay();
    for_each_range(0, 158, data);
	ssd1306_display();

	return 0;
}

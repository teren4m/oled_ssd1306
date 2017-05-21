#ifndef SSD1306_I2C_H_
#define SSD1306_I2C_H_

#define BLACK 0
#define WHITE 1
#define INVERSE 2

#define swap(a, b) { int t = a; a = b; b = t; }
#define true 1
#define false 0
#define rotation 0
#define pgm_read_byte(addr) (*(const unsigned char *)(addr))

void ssd1306_begin(unsigned int switchvcc, unsigned int i2caddr); //switchvcc should be SSD1306_SWITCHCAPVCC
void ssd1306_command(unsigned int c);

void ssd1306_clearDisplay(void);
void ssd1306_invertDisplay(unsigned int i);
void ssd1306_display();

void ssd1306_startscrollright(unsigned int start, unsigned int stop);
void ssd1306_startscrollleft(unsigned int start, unsigned int stop);

void ssd1306_startscrolldiagright(unsigned int start, unsigned int stop);
void ssd1306_startscrolldiagleft(unsigned int start, unsigned int stop);
void ssd1306_stopscroll(void);

void ssd1306_dim(unsigned int dim);

void ssd1306_drawPixel(int x, int y, unsigned int color);

void ssd1306_drawFastVLine(int x, int y, int h, unsigned int color);
void ssd1306_drawFastHLine(int x, int y, int w, unsigned int color);

void ssd1306_fillRect(int x, int y, int w, int h, int fillcolor);

void ssd1306_setTextSize(int s);
void ssd1306_drawString(char *str);
void ssd1306_drawChar(int x, int y, unsigned char c, int color, int size);

#endif				/* _SSD1306_I2C_H_ */

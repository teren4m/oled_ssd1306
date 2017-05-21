all:
Debug:
	@rm -r bin
	@mkdir bin
	@mkdir bin/Debug
	gcc main.c ssd1306_i2c.c base.c -lwiringPi -o bin/Debug/Sample_1306

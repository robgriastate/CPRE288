#include "lcd.h"
#include "string.h"

/// Simple 'Hello, world' program
/**
 * This program prints "Hello, world" to the LCD screen
 * @author Chad Nelson
 * @date 06/26/2012
 */
 
 char msg[] = "Microcontrollers are not that fun!";
 char space[] = "                   ";
 char str[100];
 
int main (void) {
	// Initialize the the LCD.  This also clears the screen.
	lcd_init(); 

	strcat(str, space);
	strcat(str, msg);
	int i = 0;
	for(i = 0; i < strlen(str);i++){
		lcd_printf("%.20s", str+i);
		//wait timer
	}
	lcd_printf("Hello, world");

	// It is recommended that you use only lcd_init(), lcd_printf(), lcd_putc, and lcd_puts from lcd.h.
    
	return 0;
}

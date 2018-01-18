#include "lcd.h"
#include "String.h"
/// Simple 'Hello, world' program
/**
 * This program prints "Hello, world" to the LCD screen
 * @author Chad Nelson
 * @date 06/26/2012
 */
 char msg[] = "Microcontrollers are lots of fun!";
 char space[] = "                  ";
 char string[100];
int main (void) {
	// Initialize the the LCD.  This also clears the screen.
	lcd_init(); 

	// Clear the LCD screen and print "Hello, world" on the LCD
	//lcd_puts("Hello, world");
	
	strcat(str, space);
	strcat(str, msg);
	int i = 0;
	for(i = 0; i < strlen(str); i++){
		lcd_printf("%.20s", str+i);
		timer_waitMillis(300);
	}
    
	// It is recommended that you use only lcd_init(), lcd_printf(), lcd_putc, and lcd_puts from lcd.h.
    
	return 0;
}

#include "lcd.h"
#include "String.h"
/// Simple 'Hello, world' program
/**
 * This program prints "Hello, world" to the LCD screen
 * @author Chad Nelson
 * @date 06/26/2012
 */
int main (void) {
	// Initialize the the LCD.  This also clears the screen.
	lcd_init(); 

	// Clear the LCD screen and print "Hello, world" on the LCD
	//lcd_puts("Hello, world");
	while(1==1){
	    timer_waitMillis(300);
	    lcd_init();
	 char msg[] = "Nooooooooooooo";
	 char space[] = "                   ";
	 char str[100] = "";
	    strcat(str, space);
	    strcat(str, msg);
	    int i = 0;
	    for(i = 0; i < strlen(str)+1; i++){
	        lcd_printf("%.20s", str+i);
	        timer_waitMillis(300);
	    }

	}

    
	// It is recommended that you use only lcd_init(), lcd_printf(), lcd_putc, and lcd_puts from lcd.h.
    
	return 0;
}

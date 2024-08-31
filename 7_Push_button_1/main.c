/*
 * Project_Name    :   Push_button_1
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>


int main (void) {

	DDRB  = 0x00;
	PORTB = 0xFF;
	DDRD  = 0xFF;
	PORTD = 0x00;

	while (1) {

		if ((PINB & (0x01))) {

			PORTD = 0xFF;
			_delay_ms (250);
			PORTD = 0x00;
			_delay_ms (250);
		}
	}

	return 0;
}
	
	
	

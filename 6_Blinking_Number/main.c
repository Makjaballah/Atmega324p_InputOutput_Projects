/*
 * Project_Name    :   Blinking_Number
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>


int main (void) {

	DDRB = 0xFF;

	while(1) {

		PORTB = 0x00;
		_delay_ms (500);

		for (int i = 0; i <= 255; i++) {

			PORTB = i;
			_delay_ms (500);
		}
	}

	return 0;
}

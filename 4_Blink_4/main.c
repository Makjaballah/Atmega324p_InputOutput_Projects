/*
 * Project_Name    :   Blink_4
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <avr/delay.h>


int main (void) {

	DDRB = 0xFF;

	while (1) {

		int myBit = 0;
		PORTB     = 0x00;
		_delay_ms (250);

		for (int i = 0; i <= 7; i++) {

			myBit = 1;
			for (int j = 1; j <= i; j++) {

				myBit *= 2;
			}

			PORTB = myBit;
			_delay_ms (250);
		}
	}
}

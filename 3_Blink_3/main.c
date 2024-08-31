/*
 * Project_Name    :   Blink_3
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>


#define LED_TOGGLE PINB |= (1 << PINB0)

int main (void) {

	DDRB  = 0xFF;
	PORTB = 0x00;

	while(1) {

		LED_TOGGLE;
		_delay_ms (250);
	}

	return 0;
}

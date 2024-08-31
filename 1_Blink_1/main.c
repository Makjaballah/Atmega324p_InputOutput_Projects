/*
 * Project_Name    :   Blink_1
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>


int main (void) {

	DDRB  = 0xFF;
	PORTB = 0x00;

	while (1) {

		PORTB |=  (1 << PINB0);
		_delay_ms(50);
		PORTB &= ~(1 << PINB0);
		_delay_ms(50);
	}
}

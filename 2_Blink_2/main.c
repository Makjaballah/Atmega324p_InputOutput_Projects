/*
 * Project_Name    :   Blink_2
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>

#define LED_ON  PORTB |=  (1 << PORTB0)
#define LED_OFF PORTB &= ~(1 << PORTB0)


int main (void){

	DDRB  = 0xFF;
	PORTB = 0x00;

	while (1) {

		LED_ON;
		_delay_ms (250);
		LED_OFF;
		_delay_ms (250);
	}
}

/*
 * Project_Name    :   Input_Output
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000UL


unsigned char BCD_Conversion (unsigned char x);

int main (void) {

	unsigned char cnt;
	DDRA  = 0xFF;
	DDRB  = 0x00;
	DDRC  = 0xFF;
	PORTB = 0xFF;

	for (;;) {
		
		if ((PINB & (1 << 0)) == 0) {

			PORTC = (PINB >> 4) & 0x0F;
			cnt   = (PINB >> 4) & 0x0F;
			PORTA = BCD_Conversion (cnt);
		}
	}

	return 0;
}


unsigned char BCD_Conversion (unsigned char x) {

	unsigned char lsd, msd,res;
	lsd = x % 10;
	msd = x / 10;
	res = (msd << 4)| lsd;
	return res;
}






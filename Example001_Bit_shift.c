/*
 ============================================================================
 Name        : Example001_Bit_shift.c
 Author      : Jakub SAMEK
 Version     :
 Copyright   : Your copyright notice
 Description : Bit shift example, Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}



int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int loc_num = 0xAA;
	int shift_num = loc_num << 2;

	printf("Loc Num is (binary):");
	bin(loc_num);
	printf(" \n ");
	printf("Loc Num is (decimal): %d \n ", loc_num);
	printf("Loc Num is (hex): %x \n ", loc_num);

	printf("Shift Num is (binary):");
	bin(shift_num);
	printf(" \n ");
	printf("Shift Num is (decimal): %d \n ", shift_num);
	printf("Shift Num is (hex): %x \n ", shift_num);


	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

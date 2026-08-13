//============================================================================
// Name        : Example002_Cpp_Casting.cpp
// Author      : Jakub SAMEK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define C_PID_MASK_0X1F static_cast<int>(0x1FU);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int a =  C_PID_MASK_0X1F;
	printf("%d",a);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

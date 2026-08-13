/*
 ============================================================================
 Name        : Example003_Modulo.c
 Author      : Jakub SAMEK
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int my_input[] = {23, 22, 21, 20, 19, 18};
    int n, mod, a;
    char is_divisible;
    int nbr_items = sizeof(my_input) / sizeof(my_input[0]);

    //for (n = 0; n < nbr_items; n++)
    for (n = 0; n < 105; n++)
    {
        //mod = my_input[n] % 4;
    	//is_divisible = (mod == 0) ? 'y' : 'n';
        //printf("%d modulo %d --> %c\n", my_input[n], 4, is_divisible);
        //printf("%d modulo %d --> %d\n", my_input[n], 4, mod);
    	a = n % 100;
    	printf("%d\n",a);
    }
}

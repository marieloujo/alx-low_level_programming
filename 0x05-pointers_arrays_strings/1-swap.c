#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the values of two integers.
*
* @a: pointer of integer
* @b: pointer of integer
*
* Return : void
*/
void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;

}

#include "main.h"
#include <string.h>

/**
* reverse_array - a function that reverses the content of an array of integers.
*
* @a: pointer of integer
* @n: number of elements of the array
*
* Return: pointer of char
*/
void reverse_array(int *a, int n)
{

	int i = 0, j, tmp;

	j = n / 2;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}

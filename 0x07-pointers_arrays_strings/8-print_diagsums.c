#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: two dimensional array
 * @size: size of matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{

	int i, _sum_1 = 0, _sum_2 = 0, count = 0;


	for (i = 0; i < (size * size); i += (size + 1))
	{

		_sum_1 += *(a + i);

	}


	for (i = (size - 1); i < (size * size); i += (size - 1))
	{
		count++;

		if (count > size)
			break;

		_sum_2 += *(a + i);
	}


	printf("%d, %d\n", _sum_1, _sum_2);

}

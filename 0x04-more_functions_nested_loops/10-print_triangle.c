#include "main.h"

/**
 * print_triangle - a function that draws a straight line in the terminal
 * @size:  is the number of times the character \ should be printed
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_triangle(int size)
{

	int i = 1, j, k;

	while (i <= size && size > 0)
	{

		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}

		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');

}

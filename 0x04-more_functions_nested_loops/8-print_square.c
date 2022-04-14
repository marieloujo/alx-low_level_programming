#include "main.h"

/**
 * print_square - a function that draws a straight line in the terminal
 * @size:   is the size of the square
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_square(int size)
{

	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}

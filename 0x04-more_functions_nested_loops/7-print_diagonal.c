#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal
 * @n:  is the number of times the character \ should be printed
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_diagonal(int n)
{

	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}

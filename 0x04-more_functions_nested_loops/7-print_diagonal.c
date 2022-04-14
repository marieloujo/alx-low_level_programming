#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal
 * @n:  is the number of times the character \ should be printed
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_diagonal(int n)
{

	int i = 1, j;

	while (i <= n && n > 0)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
            if (j == i-1)
                _putchar('\\');
		}

		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');

}

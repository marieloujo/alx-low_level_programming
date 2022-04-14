#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n:  is the number of times the character _ should be printed
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_line(int n)
{

	int i = 0/* , _underscore = 95 */;

	if (n <= 0)
	{
		_putchar('\n');

		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');

}

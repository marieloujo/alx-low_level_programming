#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n:  is the number of times the character _ should be printed
 * If n is 0 or less, the function should only print \n
 * Return: void
 */
void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}

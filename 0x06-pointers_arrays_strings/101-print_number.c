#include "main.h"

/**
* print_number - a function that prints an integer.
*
* @n: integer we want to print
*
* Return: void
*/
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n < 10)
		_putchar(n + '0');

	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');

	}

}

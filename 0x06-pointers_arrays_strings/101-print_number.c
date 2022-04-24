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

	/* if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}


	_write_number(n); */

	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);

	}

}


/**
* _write_number - a function that prints an integer.
*
* @n: integer we want to print
*
* Return: void
*/
void _write_number(int n)
{

	if ((n + '0') >= 48 && (n + '0') <= 57)
		_putchar(n + '0');

	else
	{
		_write_number(n / 10);
		_putchar((n % 10) + '0');

	}

}

#include "main.h"

/**
 * print_most_numbers - check for upper case letter
 * Return: void
 */
void print_most_numbers(void)
{

	int i = 0;

	for (i = 0; i < 10; i++)
	{

		if (i == 2 || i == 4)
			break;

		_putchar((i + '0'));

	}

	_putchar('\n');

}

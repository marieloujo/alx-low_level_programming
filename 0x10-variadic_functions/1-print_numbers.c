#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	separator == NULL ? separator = "" : separator;

	while (i < (n - 1))
	{
		printf("%i%s", va_arg(list, int), separator);

		i++;
	}

	printf("%u\n", va_arg(list, int));

	va_end(list);

}

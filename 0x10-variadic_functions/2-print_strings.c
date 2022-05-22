#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i = 0;
	char *string;

	va_start(list, n);
	separator == NULL ? separator = "" : separator;

	while (i < n)
	{
		string = va_arg(list, char*);
		i == (n - 1) ? separator = "\n" : separator;

		string == NULL ? printf("(nil)%s", separator)
						: printf("%s%s", string, separator);

		i++;
	}

	va_end(list);

}

#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_int - Function that prints int
 *
 * @list: value we want to print
 *
 * Return: void
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Function that prints float
 *
 * @list: value we want to print
 *
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - Function that prints char
 *
 * @list: value we want to print
 *
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - Function that prints string
 *
 * @list: value we want to print
 *
 * Return: void
 */
void print_str(va_list list)
{
	char *value = va_arg(list, char*);

	value == NULL ? printf("(nil)") : printf("%s", value);
}

/**
 * print_all - Function that prints anything
 *
 * @format: const pointer
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

	va_list list;
	size_t i = 0;
	int j;

	print_anything myPrinter[] = {
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(list, format);


	while (format && format[i])
	{

		j = 0;

		while (myPrinter[j].type != NULL && *(myPrinter[j].type) != format[i])
			j++;

		if (myPrinter[j].type != NULL)
		{
			myPrinter[j].printer(list);

			if (i != (strlen(format) - 1))
				printf(", ");
		}

		i++;
	}

	printf("\n");
	va_end(list);

}

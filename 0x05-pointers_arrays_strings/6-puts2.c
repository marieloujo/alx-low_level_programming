#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer of char
 *
 * Return: Always 0.
 */
void puts2(char *str)
{

    int i = 0;

	while (*str != '\0')
	{
        if (i % 2 == 0)
		    _putchar(*str);

		str++;
        i++;
	}

	_putchar('\n');

}

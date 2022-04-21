#include "main.h"
#include <stdio.h>
/**
 * puts_half -  prints half of a string, followed by a new line.
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: pointer of char
 *
 * Return: void.
 */
void puts_half(char *str)
{

	int length = 0, str_half, i;

	while (str[length] != '\0')

		length++;

	str_half = (length - 1) / 2;


	for (i = (str_half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}


	_putchar('\n');

}

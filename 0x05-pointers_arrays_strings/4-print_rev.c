#include "main.h"
#include "2-strlen.c"

/**
* print_rev - prints a string, in reverse, followed by a new line.
*
* @s: pointer of char
*
* Return: void
*/
void print_rev(char *s)
{

	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');

}
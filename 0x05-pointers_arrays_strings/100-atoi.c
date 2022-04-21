#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi -  convert a string to an integer.
 *
 * @str: pointer of char
 *
 * Return: Always int.
 */
int _atoi(char *str)
{
	int val = 0;


	while (*str)
	{
		if (isdigit(*str) || ((*str == '-' || *str == '+') && isdigit(*(str + 1))))
		{

			val = strtol(str, &str, 10);

		}

		else
		{

			str++;
		}
	}

	return (val);

}
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
	int val = 0, sign = 1;


	while (*str)
	{

		if (*str == '-')
		{
			sign *= (-1);
		}

		if (isdigit(*str) || ((*str == '-' || *str == '+') && isdigit(*(str + 1))))
		{

			val = strtol(str, &str, 10);
			val = abs(val);


			return (val * sign);

		}

		else
		{

			str++;
		}
	}

	return (val);

}
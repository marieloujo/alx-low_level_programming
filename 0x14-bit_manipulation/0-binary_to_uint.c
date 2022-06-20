#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *   there is one or more chars in the string b that is not 0 or 1
 *   b is NULL
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int number = 0, position = 0, len = _strlen(b);

	if (b == NULL)
		return (0);

	while (len--)
	{
		if (b[len] == '1')
			number += ((b[len] - '0') * (_pow(2, position)));

		else if (b[len] != '0')
			return (0);

		position++;
	}

	return (number);
}

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _pow - calculate power of number
 *
 * @number: number
 * @power: the power
 *
 * Return: value of number at power power
 */
int _pow(int number, int power)
{
	int result = number;

	if (power == 0)
	{
		return (1);
	}

	if (power == 1)
	{
		return (number);
	}

	while (power > 1)
	{
		result *= number;

		power--;
	}

	return (result);
}

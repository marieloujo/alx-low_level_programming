#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer of memory area
 * @b: constant byte
 * @n: numbers of bytes that fills
 *
 * Return: pointer of char.
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);

}

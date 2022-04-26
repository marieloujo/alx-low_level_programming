#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes wille be copied
 *
 * Return: pointer of char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

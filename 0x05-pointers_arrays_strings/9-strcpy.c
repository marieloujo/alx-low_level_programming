#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed
 *
 * @dest: pointer of char
 * @src: pointer of char
 *
 * Return: pointer of char.
 */
char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
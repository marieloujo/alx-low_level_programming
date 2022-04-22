#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcat - concatenates two strings.
*
* @dest: pointer of char
* @src: pointer of char
*
* Return: pointer of char
*/
char *_strcat(char *dest, char *src)
{

	int dest_length, i = 0;

	dest_length = strlen(dest);

	while (*src)
	{
		dest[dest_length] = *src;

		if (*(src) == '\0')
			break;

		i++;
		dest_length++;
		src++;

	}

	return (dest);

}

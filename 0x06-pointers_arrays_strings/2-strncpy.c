#include "main.h"
#include <string.h>

/**
* _strncpy - a function that copies a string.
*
* @dest: pointer of char
* @src: pointer of char
* @n: integer variable
*
* Return: pointer of char
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n)
	{
		dest[i] = *(src + i);

		if (*(src + i) == '\0')
			break;

		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

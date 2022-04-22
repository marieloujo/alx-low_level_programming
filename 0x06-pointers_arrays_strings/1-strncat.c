#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings.
*
* @dest: pointer of char
* @src: pointer of char
* @n: integer variable
*
* Return: pointer of char
*/
char *_strncat(char *dest, char *src, int n)
{

	int dest_length, src_length, i = 0;

	dest_length = strlen(dest);
	src_length  = strlen(src);

	if (src_length < n)
	{
		n = src_length;
	}

	while (i < n)
	{
		dest[dest_length] = *(src + i);

		i++;
		dest_length++;

	}

	return (dest);
}

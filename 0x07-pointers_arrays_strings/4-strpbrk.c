#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - gets the length of a prefix substring
 *
 * @s : string to be scanned.
 * @accept : string containing the characters to match.
 *
 * Return: This function
 * return a pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 *
*/
char *_strpbrk(char *s, char *accept)
{

	int  i = 0, length = strlen(accept);


	while (*s != '\0')
	{

		i = 0;
		while (i < length)
		{
			if (*s == accept[i])

				return (s);

			i++;
		}

		s++;

	}

	return (NULL);

}

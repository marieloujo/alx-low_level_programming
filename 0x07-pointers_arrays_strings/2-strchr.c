#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character we want to find
 *
 * Return: pointer of char or NULL
 */
char *_strchr(char *s, char c)
{

	int  i = 0, length = strlen(s);


	while (i <= length)
	{

		if (*s == c)

			return (s);

		s++;
		i++;

	}

	return (NULL);

}

#include "main.h"
#include <stddef.h>

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

	char *found;
	int i = 0;

	while (*(s + i) != '\0')
	{

		if (*(s + i) == c)
		{
			found = (s + i);
			return (found);
		}

		i++;

	}

	return (NULL);

}

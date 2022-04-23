#include "main.h"
#include <string.h>

/**
* cap_string - a function that capitalizes all words of a string.
*
* @string: pointer of char
*
* Return: pointer of char
*/
char *cap_string(char *string)
{

	int i = 1;

	if (*string >= 97 && *string <= 122)
	{
		*string -= 32;
	}

	while (*(string + i) != '\0')
	{

		if (*(string + i) == ' ' || *(string + i) == '\t' ||
			*(string + i) == '\n' || *(string + i) == ',' ||
			*(string + i) == ';' || *(string + i) == '.' ||
			*(string + i) == '!' || *(string + i) == '?' ||
			*(string + i) == '"' || *(string + i) == '(' ||
			*(string + i) == ')' || *(string + i) == '{' ||
			*(string + i) == '}')
		{
			if (*(string + i + 1) >= 97 && *(string + i + 1) <= 122)
			{
				*(string + i + 1) -= 32;
			}
		}

		i++;

	}

	return (string);

}

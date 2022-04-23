#include "main.h"
#include <string.h>

/**
* string_toupper - a function that changes
* all lowercase letters of a string to uppercase.
*
* @string: pointer of char
*
* Return: pointer of char
*/
char *string_toupper(char *string)
{

	int i = 0;

	while (*(string + i) != '\0')
	{

		if (*(string + i) >= 97 && *(string + i) <= 122)
		{
			*(string + i) -= 32;
		}

		i++;

	}

	return (string);

}

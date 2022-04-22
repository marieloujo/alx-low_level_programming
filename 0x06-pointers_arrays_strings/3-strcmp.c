#include "main.h"
#include <string.h>

/**
* _strcmp - a function that compares two strings.
*
* @s1: pointer of char
* @s2: pointer of char
*
* Return: pointer of char
*/
int _strcmp(char *s1, char *s2)
{

	int cmp = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{

		if (*s1 != *s2)
		{
			cmp = *s1 - *s2;
			break;
		}

		s1++;
		s2++;

	}

	return (cmp);

}

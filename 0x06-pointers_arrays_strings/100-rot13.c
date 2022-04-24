#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes a string into  rot13.
*
* @string: pointer of char
*
* Return: pointer of char
*/
char *rot13(char *string)
{

	int i;


	for (i = 0; *(string + i) != '\0'; i++)
	{
		while ((*(string + i) >= 65 && *(string + i) <= 90) ||
				(*(string + i) >= 97 && *(string + i) <= 122))
		{

			if ((*(string + i) >= 110 && *(string + i) <= 122) ||
				(*(string + i) >= 78 && *(string + i) <= 90))

				*(string + i) = (*(string + i) - 13);

			else
				*(string + i) = (*(string + i) + 13);


			break;

		}


	}

	return (string);
}

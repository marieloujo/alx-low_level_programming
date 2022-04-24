#include "main.h"

/**
* rot13 - a function that encodes a string into  rot13.
*
* @string: pointer of char
*
* Return: pointer of char
*/
char *rot13(char *string)
{

	int i, changed = 0;

	for (i = 0; *(string + i) != '\0'; i++)
	{

		while ((*(string + i) >= 65 && *(string + i) <= 77) ||
				(*(string + i) >= 97 && *(string + i) <= 109))
		{

			*(string + i) = (*(string + i) + 13);
            changed = 1;

			break;
		}


		if (((*(string + i) >= 110 && *(string + i) <= 122) ||
			(*(string + i) >= 78 && *(string + i) <= 90)) && !changed)

			*(string + i) = (*(string + i) - 13);

        changed = 0;

	}


	return (string);
}

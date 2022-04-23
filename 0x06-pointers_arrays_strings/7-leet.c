#include "main.h"
#include <string.h>

/**
* leet - a function that encodes a string into 1337.
*
* @string: pointer of char
*
* Return: pointer of char
*/
char *leet(char *string)
{

	int i = 0, j;

	char *_low_case_letters = "aeotl";
	char *_upper_case_letters = "AEOTL";
	char *leet = "43071";

	while (*(string + i) != '\0')
	{

		for (j = 0; j < 5; j++)
		{
			if (*(string + i) == _low_case_letters[j] ||
				*(string + i) == _upper_case_letters[j])

				*(string + i) = leet[j];

		}

		i++;

	}

	return (string);

}

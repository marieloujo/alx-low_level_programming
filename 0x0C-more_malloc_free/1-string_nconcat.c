#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* string_nconcat - Function that concatenates two strings
*
*@s1: first string
*@s2: second string
*@n: number of letter
*
* Return: pointer of concatenate concanet strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *concat;
	unsigned int i, length1, length2;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		n = length2;

	concat = malloc((length1 + n) * sizeof(char) + 1);

	if (concat == 0)
		return (NULL);

	for (i = 0; i < (length1 + n); i++)
	{
		if (i < length1)
			*(concat + i) = s1[i];

		else
			*(concat + i) = s2[i - length1];
	}

	*(concat + i) = '\0';

	return (concat);

}

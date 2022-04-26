#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : string to be scanned.
 * @accept : string containing the characters to match.
 *
 * Return: This function
 * returns the number of characters
 * in the initial segment of s
 * which consist only of characters
 * from accept.
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmpt = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (cmpt);
}

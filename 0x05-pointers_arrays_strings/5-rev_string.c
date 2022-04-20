#include <stdio.h>

/**
* rev_string - reverses a string.
*
* @s: pointer of char
*
* Return: void
*/
void rev_string(char *s)
{

	char tmp;
	int length = 0, str_middle, i = 0;


	while (s[length])
		length++;

	str_middle = length / 2;


	while (str_middle--)
	{

		tmp = s[length - 1 - i];
		s[length - 1 - i] = s[i];
		s[i] = tmp;

		i++;
	}


}

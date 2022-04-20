#include "main.h"
#include <stdio.h>

/**
* _strlen -  the length of a string.
*
* @s: pointer of char
*
* Return : length
*/
int _strlen(char *s)
{

	int length = 0;

	while (*(s++) != '\0')

		length++;


	return (length);

}

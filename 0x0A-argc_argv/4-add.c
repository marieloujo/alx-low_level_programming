#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber -  check if string is number
*
* @string: contain value we want to check
*
* Return: 0||1
*/
int isNumber(char *string)
{

	int j;

	j = strlen(string);

	while (j--)
	{
		if (string[j] > 47 && string[j] < 58)

			continue;

		return (0);
	}

	return (1);
}


/**
* main -  program that prints its name, followed by a new line
*
* @argc: size of argv
* @argv: list of program parameters
*
* Return: Allways 0
*/
int main(int argc, char *argv[])
{

	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{

		if (!isNumber(*(argv + i)))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(*(argv + i));

	}

	printf("%d\n", sum);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - check if string is number
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
	int i = 0, coinUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (isNumber(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinUsed++;
			}
			else
			{
				coin++;
			}
		}
	}

	printf("%i\n", coinUsed);

	return (0);
}

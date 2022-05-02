#include <stdio.h>
#include <stdlib.h>

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

	if ((argc - 1) < 2)

		printf("Error\n");

	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}

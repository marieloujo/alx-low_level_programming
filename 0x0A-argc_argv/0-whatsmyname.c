#include <stdio.h>

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
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}

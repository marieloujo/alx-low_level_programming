#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{

	unsigned long int n = 0;

	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	n = atoi(argv[1]) * atoi(argv[2]);

	printf("%lu\n", n);

	return (0);

}

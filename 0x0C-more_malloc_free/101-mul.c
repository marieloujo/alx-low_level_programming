#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */
void print_number(int n)
{

	unsigned int n1 = 0;

	if  (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');

}


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

	print_number(n);
	_putchar('\n');

	return (0);

}

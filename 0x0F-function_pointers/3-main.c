#include "3-calc.h"

/**
* main - Prints the result of simple operations.
*
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{

	int (*operator_fun)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator_fun = get_op_func(argv[2]);

	if (operator_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator_fun(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);

}

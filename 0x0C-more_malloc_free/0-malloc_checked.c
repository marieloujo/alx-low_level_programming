#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 *
 *@b: size of array
 *
 * Return: 98 if fail or  pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);

}

#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers
*
* @min: miminum of number
* @max: maximum of number
*
* Return: pointer
*/
int *array_range(int min, int max)
{

	int *range, i = 0, j = 0;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(*range) * (max - min + 1));


	if (range == 0)
		return (NULL);

	for (i = min; i <= (max - min); i++, j++)
	{
		*(range + j) = i;
	}

	return (range);

}

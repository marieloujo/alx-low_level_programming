#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: pointer of int
 * @size: umber of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);

			i++;
		}

	return (-1);

}

#include "function_pointers.h"

/**
 * array_iterator - Function that executes
 * a function given as a parameter
 * on each element of an array.
 *
 * @array: pointer of int
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i = 0;

	if (array != NULL && action != NULL)

		while (i < size)
		{
			action(array[i]);

			i++;
		}

}

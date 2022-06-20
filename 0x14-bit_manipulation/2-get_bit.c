#include "main.h"

/**
 * get_bit - Function that returns
 * the value of a bit at a given index
 *
 * @n: number
 * @index:  is the index,
 * starting from 0 of the bit you want to get
 * Return: Nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGHT)
		return (-1);

	return ((n >> index) & 1);
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - add 2 integers.
 *
 * @n1: integer
 * @n2: integer
 * @r: buffer
 * @size_r: size of r 556236562 56
 *
 * Return: pointer char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int _length_1, _length_2, operande_1, operande_2, retenue = 0, result = 0;

	_length_1 = strlen(n1) - 1;
	_length_2 = strlen(n2) - 1;
	r[size_r - 1] = '\0';
	size_r -= 2;

	while (_length_1 >= 0 || _length_2 >= 0)
	{
		if (size_r < 0)
			return (0);

		operande_1 = _length_1 < 0 ? 0 : (n1[_length_1] - '0');
		operande_2 = _length_2 < 0 ? 0 : (n2[_length_2] - '0');

		result	    = (operande_1 + operande_2 + retenue);
		r[size_r]   = ((result % 10) + '0');
		retenue	    = result / 10;

		_length_1--;
		_length_2--;
		size_r--;

	}

	if (retenue != 0)
	{
		if (size_r < 0)
			return (0);

		r[size_r] = retenue + '0';
		r = &r[(size_r)];
	}
	else
		r = &r[(size_r + 1)];

	return (r);
}

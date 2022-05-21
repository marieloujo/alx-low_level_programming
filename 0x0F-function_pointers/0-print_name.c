#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 *
 * @name: pointer of string that contain the name
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

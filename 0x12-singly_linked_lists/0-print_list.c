#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 *
 * @h: list of elements
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}

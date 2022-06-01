#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that prints returns the number of
 * elements in a linked listint_t list
 *
 * @h: list of elements
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

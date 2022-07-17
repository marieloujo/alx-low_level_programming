#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts  the number of elements in a linked dlistint_t list
 * @h: head of the dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

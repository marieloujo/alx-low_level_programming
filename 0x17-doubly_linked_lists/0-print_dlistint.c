#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

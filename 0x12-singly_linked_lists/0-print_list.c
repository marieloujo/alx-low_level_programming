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
	size_t nbr_nodes = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		printf("[%d] %s\n", list->len,
		list->str != NULL ? list->str : "(nil)");
		list = list->next;
		nbr_nodes++;
	}

	return (nbr_nodes);

}

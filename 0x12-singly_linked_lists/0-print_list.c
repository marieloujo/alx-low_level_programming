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
	size_t i = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		printf("[%u] %s\n", list->len, list->str != NULL ? list->str : "(nil)");

		list = list->next;
		i++;
	}

	return (i);

}

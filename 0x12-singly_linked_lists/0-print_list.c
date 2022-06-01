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

	while (h != NULL)
	{
		print_list_element(h);

		h = h->next;
		i++;
	}

	return (i);

}

/**
 * print_list_element - Function that prints list_t
 *
 * @h: pointer of elements
 *
 * Return: void
 */
void print_list_element(const list_t *h)
{

	printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");

}

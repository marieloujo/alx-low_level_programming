#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list
 *
 * @head: pointer of first list element
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}

}

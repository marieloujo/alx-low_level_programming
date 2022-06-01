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
	list_t *next;

	while (head != NULL)
	{
		next = head->next;

		free(head);
		free(head->str);

		head = next;
	}

}

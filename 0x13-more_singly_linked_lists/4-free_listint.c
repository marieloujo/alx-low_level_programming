#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list
 *
 * @head: listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{

	listint_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}

}

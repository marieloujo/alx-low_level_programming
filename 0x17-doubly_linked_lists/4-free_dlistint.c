#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the dlistint_t list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head);
		head = nxt;
	}
}

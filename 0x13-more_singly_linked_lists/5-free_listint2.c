#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t list
 *
 * @head: listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{

	listint_t *current;

	while (head != NULL && *head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}

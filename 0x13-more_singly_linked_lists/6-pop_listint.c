#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a listint_t list
 *
 * @head: listint_t
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{

	int data = 0;
	listint_t *tmp;

	if (*head)
	{
		tmp = *head;

		if (tmp)
		{
			data = tmp->n;
			*head = tmp->next;

			free(tmp);
			tmp = NULL;
		}
	}

	return (data);

}

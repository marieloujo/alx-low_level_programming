#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * of a listint_t linked list
 *
 * @head: pointer of pointer of listint_t
 * @index: the index of the node, starting at 0
 *
 * Return:  the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp = NULL;
	unsigned int i = 0;

	while (*head != NULL)
	{

		if (i == index)
		{
			tmp = *head;
			*head = (*head)->next;

			free(tmp);
			tmp = NULL;

			return (1);
		}

		head = &((*head)->next);
		i++;
	}

	return (-1);

}

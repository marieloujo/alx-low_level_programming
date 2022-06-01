#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts
 * a new node at a given position.
 *
 * @head: head of linked list
 * @idx: the index of the node, starting at 0
 * @n: value of new node
 *
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *tmp = NULL, *new = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		new = add_nodeint_end(head, n);

		if (new == NULL)
			return (NULL);

		new->next = tmp;
		*head = new;

		return (new);
	}


	while (*head != NULL)
	{

		if (i == idx)
		{
			tmp = *head;
			*head = NULL;

			new = add_nodeint_end(head, n);

			if (new == NULL)
				return (NULL);

			new->next = tmp;
			*head = new;

			break;
		}

		head = &((*head)->next);
		i++;
	}

	return (new);

}

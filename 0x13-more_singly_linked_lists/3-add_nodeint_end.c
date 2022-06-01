#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the
 * end of a listint_t list
 *
 * @head: head of linked list
 * @n: value of new node
 *
 * Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = NULL;

		*head = new;
	}

	else
	{
		add_nodeint_end(&((*head)->next), n);
	}

	return (*head);

}

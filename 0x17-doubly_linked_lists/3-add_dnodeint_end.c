#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer of head of the dlistint_t list
 * @n: value of new data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = *head;

		if (*head)
			(*head)->next = new_node;

		*head = new_node;

	}

	else
		add_dnodeint_end(&((*head)->next), n);

	return (*head);
}

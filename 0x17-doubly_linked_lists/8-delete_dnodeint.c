#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_dlistint - Function that deletes the head node of a dlistint_t list
 * @head: dlistint_t
 * Return: void
 */
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *tmp;

	if (*head)
	{
		tmp = *head;
		*head = tmp->next;

		if (*head)
			(*head)->prev = NULL;

		free(tmp);

		return (1);
	}

	return (-1);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: pointer to head of the dlistint_t list
 * @index: position of node we want to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current;
	unsigned int i = 0;

	if (!head)
		return (-1);

	if (index == 0)
		return (pop_dlistint(head));

	current = *head;

	while (current)
	{
		if (index == i)
		{
			printf("tata\n");

			tmp = current;
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = tmp->prev;

			free(tmp);

			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}

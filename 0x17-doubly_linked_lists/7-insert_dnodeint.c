#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of the dlistint_t list
 * @idx: position where node will be place
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	tmp = *h;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	while (tmp != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			return (swap_nodes(tmp, new_node));
		}

		tmp = tmp->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}

/**
 * swap_nodes - alternate two nodes
 * @first_node: node who left her position
 * @second_node: node who will take position of first_node
 * Return: the address of seconde node, or NULL if it failed
 */
dlistint_t *swap_nodes(dlistint_t *first_node, dlistint_t *second_node)
{
	second_node->prev = first_node->prev;
	second_node->next = first_node;

	if (first_node->prev)
		first_node->prev->next = second_node;

	first_node->prev = second_node;

	return (second_node);
}

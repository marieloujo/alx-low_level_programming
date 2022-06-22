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

	if (head != NULL)
	{
		if (*head == NULL && idx == 0)
		{
			new = add_nodeint_end(head, n);

			if (new != NULL)
			{
				new->next = tmp;
				*head = new;
			}
		}
		else
		{
            if (idx == (unsigned int) listint_len(*head))
            {
                return add_nodeint_end(head, n);
            }

			while (*head != NULL)
			{
				if (i == idx)
				{
					tmp = *head;
					*head = NULL;
					new = add_nodeint_end(head, n);

					if (new != NULL)
					{
						new->next = tmp;
						*head = new;
					}
					break;
				}
				head = &((*head)->next);
				i++;
			}
		}
	}
	return (new);
}

/**
 * listint_len - Function that prints returns the number of
 * elements in a linked listint_t list
 *
 * @h: list of elements
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

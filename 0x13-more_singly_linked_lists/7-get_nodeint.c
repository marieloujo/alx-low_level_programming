#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Function that  returns the nth node
 * of a listint_t linked list
 *
 * @head: listint_t
 * @index: the index of the node, starting at 0
 *
 * Return: pointer of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);

}

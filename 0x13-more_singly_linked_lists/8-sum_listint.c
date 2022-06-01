#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Function that returns the sum
 * of all the data (n) of a listint_t linked list
 *
 * @head: listint_t
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}

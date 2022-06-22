#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_listint - Function that prints all
 * the elements of a listint_t list
 *
 * @h: list of elements
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		_putchar((h->n + '0'));
		_putchar('\n');
		h = h->next;
		i++;
	}

	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

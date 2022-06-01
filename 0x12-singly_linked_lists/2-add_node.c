#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 *
 * @head: pointer of pointer to the head of list
 * @str: string of list_t
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new = create_node(str);

	if (new != NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	free(new);

	return (NULL);
}

/**
 * create_node - Function that create a new node of type list_t
 *
 * @str: string of list_t
 *
 * Return: list_t
 */
list_t *create_node(const char *str)
{

	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	node->next = NULL;

	return (node);

}

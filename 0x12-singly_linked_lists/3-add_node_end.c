#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 *
 * @head: pointer of pointer to the head of list
 * @str: string of list_t
 *
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;

	if (*head == NULL)
	{
		new = create_node(str);

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		*head = new;
	}

	else
		add_node_end(&((*head)->next), str);


	return (new);

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

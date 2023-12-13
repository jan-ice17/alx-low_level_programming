#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dulpy;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	dulpy = strdup(str);
	if (dulpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	new_node->str = dulpy;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

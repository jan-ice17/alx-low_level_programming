#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		current_node = *head;
		for (count = 0; count < idx - 1 && current_node != NULL; count++)
			current_node = current_node->next;

		if (current_node == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}

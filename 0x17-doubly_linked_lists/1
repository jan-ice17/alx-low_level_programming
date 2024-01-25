#include "lists.h"

/*
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: The head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	/* Traverse the list until we reach the end (NULL) */
	while (h != NULL)
	{
		node_count++;
		h = h->next;	/* Move to the next node */
	}

	return (node_count);
}


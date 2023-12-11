#include "lists.h"
#include <stdio.h>

/**
 * listint_len -return no of elements in a listint_t list
 * @h: pointer
 *
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node;
	size_t count = 0;

	current_node = h;
	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

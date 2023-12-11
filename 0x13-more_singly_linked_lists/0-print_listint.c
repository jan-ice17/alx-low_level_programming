#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node;
	size_t count = 0;

	current_node = h;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		count++;
	}
	return (count);
}


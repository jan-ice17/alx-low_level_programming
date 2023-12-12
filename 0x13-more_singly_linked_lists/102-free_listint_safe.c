#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *current_node;
	listint_t *next_node;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;

	while (current_node != NULL)
	{
		num++;
		next_node = current_node;
		current_node = current_node->next;

		if (next_node <= next_node->next)
		{
			free(next_node);
			*h = NULL;
			break;
		}

		free(next_node);
	}

	*h = NULL;
	return (num);
}

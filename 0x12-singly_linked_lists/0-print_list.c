#include "lists.h"

/**
 * print_list - this prints all
 * the elemente of list_t
 * @h: pointers to the head of list
 * Return: the no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count_node++;
	}
	return (count_node);
}

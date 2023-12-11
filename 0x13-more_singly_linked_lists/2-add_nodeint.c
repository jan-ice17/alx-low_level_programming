#include "lists.h"

/**
 * add_nodeint - add new node to start pf listint_t list
 * @head: pointer to a pointer to start of list
 * @n: data is store in new node
 *
 * Return: address of a new element or Null if failes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

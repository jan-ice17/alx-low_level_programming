#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next; /* store next node */
		(*head)->next = prev_node; /* reverse link */
		prev_node = *head; /* move the prev_node one step ahead */
		*head = next_node; /* move the head one ahead */
	}

	*head = prev_node; /* after the loop, the last nod is head */

	return (*head);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the head node
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_pntr;
	int n;

	if (*head == NULL)
		return (0);

	temp_pntr = *head;
	n = temp_pntr->n;
	*head = (*head)->next;
	free(temp_pntr);
	return (n);
}

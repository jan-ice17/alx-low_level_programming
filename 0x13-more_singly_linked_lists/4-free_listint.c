#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp_pntr;

	while (head != NULL)
	{
		temp_pntr = head;
		head = head->next;
		free(temp_pntr);
	}
}

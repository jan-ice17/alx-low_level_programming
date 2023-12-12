#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) /* loop detected */
		{
			do {
				printf("[%p] %d\n", (void *)slow, slow->n);
				num++;
				slow = slow->next;
			} while (slow != fast);
			return (num);
		}
	}

	/* no loop, print the list normally */
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num++;
		head = head->next;
	}

	return (num);
}

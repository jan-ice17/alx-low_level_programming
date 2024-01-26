#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: pner to the head of the dlistint_t list.
 * @index: The index of the node, starting from 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;

    while (head)
    {
        if (count == index)
            return (head);
        count++;
        head = head->next;
    }

    return (NULL);
}

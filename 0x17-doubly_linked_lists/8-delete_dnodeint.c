#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: A double pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted, starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node = *head;
    unsigned int i = 0;

    /* Check if the list is empty or the index is out of range */
    if (!head || !*head)
        return (-1);

    /* If the index is 0, delete the head node */
    if (index == 0)
    {
        *head = node->next;
        if (node->next)
            node->next->prev = NULL;
        free(node);
        return (1);
    }

    /* Taverse the list to the given index and delete the node */
    while (node && i < index)
    {
        if (i + 1 == index)
        {
            if (node->next)
            {
                node->next = node->next->next;
                if (node->next)
                    node->next->prev = node;
                free(node->next);
                return (1);
            }
        }
        node = node->next;
        i++;
    }

    return (-1);
}

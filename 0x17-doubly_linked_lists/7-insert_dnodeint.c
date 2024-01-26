#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double ptr to the head of the dlistint_t list.
 * @idx: The indexwhere the new node should be added, starts at 0.
 * @n: The data for the new nod
 *
 * Return: The address of the new node or nullfailed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *node = *h;
    unsigned int i = 0;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;/*set to n*/
    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    while (node && i < idx)
    {
        if (i + 1 == idx)
        {
            new_node->next = node->next;
            new_node->prev = node;
            if (node->next)
                node->next->prev = new_node;
            node->next = new_node;
            return (new_node);
        }
        node = node->next;
        i++;
    }

    free(new_node);
    return (NULL);
}

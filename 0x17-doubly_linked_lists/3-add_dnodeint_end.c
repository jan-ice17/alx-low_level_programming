#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointeraddress of the head of the dlistint_t list.
 * @n: integer for the new node to contain.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp_node;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
    }
    else
    {
        temp_node = *head;
        while (temp_node->next != NULL)
            temp_node = temp_node->next;
        new->prev = temp_node;
        temp_node->next = new;
    }

    return (new);
}

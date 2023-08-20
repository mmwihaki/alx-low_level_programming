#include "lists.h"
#include <stddef.h>
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;

    while (current != NULL && index > 0)
    {
        current = current->next;
        index--;
    }

    return (index == 0) ? current : NULL;
}

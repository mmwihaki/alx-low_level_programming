#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of a listint_t linked list
 * @head: head point
 * @index: index of the node to retrieve
 *
 * description - return nth node of a list
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL && index > 0)
	{
		return (NULL);
	}

	return (current);
}

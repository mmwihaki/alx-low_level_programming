#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: head node
 * description - free list
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}

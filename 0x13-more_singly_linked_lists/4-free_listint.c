#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 *
 * @head: head node
 *
 * description - function that frees list
 * Return: Always 0 (success)
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

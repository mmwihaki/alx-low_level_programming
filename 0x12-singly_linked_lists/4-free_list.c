#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: first node
 * description - free a list_t
 * Return: 0
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}

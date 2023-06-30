#include "lists.h"
#include <stdio.h>
/**
 * list_len- return elements in a list
 * @h: head node
 * description - return elements in linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *j;

	for (j = h; j != NULL; j = j->next)
	{
		i++;
	}

	return (i);

}

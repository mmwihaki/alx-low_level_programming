#include "lists.h"
#include <stdio.h>
/**
 * listint_len - check number of elements in a linkedin list
 *
 * @h - head node
 *
 * description - return number of elements
 *
 * Return: Number fo elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *j;

	for (j =h; j!= NULL; j = j->next)
	{
		count++;
	}

	return (count);
}

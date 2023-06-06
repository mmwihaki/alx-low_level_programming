#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - print elements of list
 * @h: node pointer
 *
 * description - print elements of listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *currentNode = h;

	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		count++;
		currentNode = currentNode->next;
	}
	return (count);
}

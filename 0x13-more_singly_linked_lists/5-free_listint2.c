#include "lists.h"
#include <stdlib.h>
/**
 * free-listint2 - free list, set head to NULL
 * @head: head node
 * description - free list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode, *nextNode;

	if (head == NULL)
		return;

	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}

	*head = NULL;
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end
 *
 * @head: head
 * @n: new node
 *
 * description - add node at the end of list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *currentNode;

	endNode = (listint_t *)malloc(sizeof(listint_t));

	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		currentNode = *head;
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}

		currentNode->next = endNode;
	}

	return (endNode);
}

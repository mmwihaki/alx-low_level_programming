#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert new node at position index
 *
 * @head: pointer
 * @idx: index
 * @n: value for the new node
 *
 * description - insert new node at specific location
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode = *head;
	listint_t *previousNode = NULL;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (idx > 0 && currentNode != NULL)
	{
		previousNode = currentNode;
		currentNode = currentNode->next;
		idx--;
	}

	if (currentNode == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = currentNode;
	previousNode->next = newNode;

	return (newNode);
}

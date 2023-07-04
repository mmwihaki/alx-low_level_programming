#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node
 * @head: head
 * @n: new node
 *
 * description - add new node at start
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 *
 * @head: head pointer
 *
 * description - delete head node of a listint_t
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = temp->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);

	return (data);
}

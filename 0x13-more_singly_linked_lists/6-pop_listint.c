#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head node
 * @head: headpointer
 * description - delete node
 * Return: n - head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = temp->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(temp);

	return (data);
}

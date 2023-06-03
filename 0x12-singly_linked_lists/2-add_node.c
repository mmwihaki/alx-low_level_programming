#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * *add_node - add node
 * @head: first node
 * @str: node to add
 * description - add a new node at the beginning of a list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *secondNode = malloc(sizeof(list_t));

	if (secondNode == NULL)
	{
		return (NULL);
	}

	secondNode->str = strdup(str);

	if (secondNode->str == NULL)
	{
		free(secondNode);
		return (NULL);
	}

	secondNode->next = *head;
	*head = secondNode;

	return (secondNode);
}

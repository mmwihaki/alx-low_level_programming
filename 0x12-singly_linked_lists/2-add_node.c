#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - add node
 * @head: first node
 * @str: node to add
 * description - add new node at the beginning of list
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *sNode = malloc(sizeof(list_t));

	if (sNode == NULL)
	{
		return (NULL);
	}

	sNode->str = strdup(str);

	if (sNode->str == NULL)
	{
		free(sNode);
		return (NULL);
	}

	sNode->next = *head;
	*head = sNode;

	return (sNode);
}

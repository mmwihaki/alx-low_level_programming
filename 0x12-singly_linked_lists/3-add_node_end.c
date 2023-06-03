#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_node_end - add node
 * @head: first node 
 * @str: new node
 * description - add node to the end of the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode, *current;

	endNode = malloc(sizeof(list_t));

	if (endNode == NULL)
	{
		return (NULL);
	}

	endNode->str = strdup(str);

	if (endNode->str == NULL)
	{
		free(endNode);
		return (NULL);
	}

	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = endNode;
	}

	return (endNode);
}

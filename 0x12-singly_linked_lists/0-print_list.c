#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
  * print_list - a function that prints all the elements of a list
  *
  * @h: node pointer
  *
  * description - print elements of a list
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *j = h;
	size_t len;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (i);
	}

	for (j = h; j != NULL; j = j->next)
	{
		len = j->str ? strlen(j->str) : 0;
		printf("[%lu] %s\n", len, j->str);
		i++;
	}
	return (i);
}

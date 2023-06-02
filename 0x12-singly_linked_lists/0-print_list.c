#include "lists.h"
#include <stdio.h>
#include <stddef.h>
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
	const list_t *j;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (i);
	}

	for (j = h; j != NULL; h = h->next)
	{
		printf("%s\n", h->str);
		i++;
	}
	
	return (i);
}

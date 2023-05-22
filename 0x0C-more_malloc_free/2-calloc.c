#include "main.h"
#include <stdlib.h>
/**
  * _calloc - allocate memory
  *
  * @nmemb: array
  *
  * @size: elements
  *
  * description - allocate memory for an array using malloc
  *
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = 0;
	unsigned int i = 0;
	unsigned char *byte_pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	byte_pointer = malloc(total_size);

	if (byte_pointer == NULL)
		return (NULL);

	while (i < total_size)
	{
		byte_pointer[i] = 0;
		i++;
	}

	return (byte_pointer);
}

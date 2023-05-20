#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * _realloc - reallocate a memory block
  *
  * @ptr: pointer
  * @old_size: allocated space for ptr
  * @new_size: new size of memory block
  *
  * description - reallocate a memory block using malloc
  *
  * Return: Always 0
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return (new_ptr);
}

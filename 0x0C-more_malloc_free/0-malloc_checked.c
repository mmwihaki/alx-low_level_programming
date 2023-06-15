#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b: data
 * descriptionn - allocate memory
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

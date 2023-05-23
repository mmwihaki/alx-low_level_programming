#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs
 *
 * @d: member
 *
 * description - a function that frees dogs
 *
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

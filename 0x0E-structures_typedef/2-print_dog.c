#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog
 *
 * @d: Pointer to the struct dog to be printed
 *
 * description - print dog
 *
 * If d is NULL, it prints nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog
 *
 * @d: pointer to the struct dog to be printed
 *
 * description - print dog
 *
 * if d is NULL, it prints nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name !=NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

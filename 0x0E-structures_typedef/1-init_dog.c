#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize
 *
 * @d: dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description - initialize variable type dog
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

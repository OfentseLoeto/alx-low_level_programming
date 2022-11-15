
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Inititializing a dog structure
 * @d: A dog structure
 * @name: The name a dog
 * @age: The age of a dog
 * @owner: The owner of a dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
	if (d != NULL)

	{
	d->name = name;
	d->age = age;
	d->owner = owner;

	}
	return (dog);

}


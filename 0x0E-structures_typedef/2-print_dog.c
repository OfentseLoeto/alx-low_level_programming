
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print all datas of adog
 * @d: Pointer to struct dog
 *
 * Description: Functon to print a struct dog
 *
 * Return: Pointer to struct dog
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
	return;
	if (d->name == NULL)
	d->name = "(nil)";

	if (d->owner == NULL)
	d->owner = "(nil)";
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
	}
}

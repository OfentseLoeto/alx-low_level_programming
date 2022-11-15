#include "dog.h"
#include <stdlib.h>
#include "main.c"

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cute_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)

	{

	name_l = _strlen(name) + 1;
	own_l = _strlen(owner) + 1;

	cute_dog = malloc(sizeof(dog_t));

	if (cute_dog == NULL)
	return (NULL);

	cute_dog->name = malloc(sizeof(char) * own_l);

	if (cute_dog->name == NULL)

	{

	free(cute_dog);
	return (NULL);
	}

	cute_dog->name = _strcpy(cute_dog->name, name);
	cute_dog->owner =  _strcpy(cute_dog->owner, owner);

	cute_dog->age = age;
	}
	return (cute_dog);
}


/**
 * _strlen - Reurns the length of a string
 * @s: String to count
 *
 * Return: Length of the string
 */

int _strlen(char *s)

{
	int c = 0;

	for (; *s != '\0'; s++)

	{
	c++;

	}
	return (c);
}

/**
 * _strcpy - Copy the string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

	{

	dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of an array
 * @c: The charecter to fill in the array
 *
 * Return: The filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *d;

	if (size == 0)
	return (NULL);

	d = malloc(size * sizeof(char));

	if (d == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	d[i] = c;
	}

	return (d);
}

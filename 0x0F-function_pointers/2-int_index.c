#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @size: the number of elements in the array
 * @array: array pointer
 * @cmp: function to a number
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size > 0)

	{

	if (array != NULL && cmp != NULL)
	{

	while (i < size)
	{
	if (cmp(array[i]))

	return (i);
	i++;
	}
	}
	}

	return (-1);
}

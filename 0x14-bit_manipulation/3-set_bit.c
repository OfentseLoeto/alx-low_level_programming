#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to modify
 * @index: the in the number to modify
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}

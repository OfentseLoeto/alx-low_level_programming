#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: integer to swap
 * @b: another integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

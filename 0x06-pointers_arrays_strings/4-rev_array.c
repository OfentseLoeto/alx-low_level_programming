#include "main.h"

/**
 * rev_array -  Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number od elements to swap
 *
 * Return: Empty
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
	p++;
	}

	for (k = 0; k < i / 2; k++)
	{
	aux = a[k];
	a[k] = *p;
	*p = aux;

	p--;
	}
}




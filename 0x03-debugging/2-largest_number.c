#include "main.h"

/**
 * largest_number - return largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
	largest = a;
	}

	if (b > a && b > c)
	{
	largest = b;
	}

	else

	{
	largest = c;
	}

	return (largest);
}

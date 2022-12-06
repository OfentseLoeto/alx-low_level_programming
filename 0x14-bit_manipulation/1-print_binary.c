#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to represent in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)

	{
	_putchar('0');
	return;
	}

	_devide(n);
}

/**
 * _devide - ...
 * @n: ...
 *
 * Return: ...
 */

void _devide(unsigned long int n)
{

	if (n < 1)

	return;

	_devide(n >> 1);

	if (n & 1)

	_putchar('1');

	else

	_putchar('0');
}

#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Print name
 * @name: Name to print
 * @f: Pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}


#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: The string to reverse
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')

	{

	_print_rev_recursion(s + 1);
	}

	else

	return;
	_putchar(*s);
}

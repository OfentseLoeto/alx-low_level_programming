#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @p: The string to modify
 *
 * Return: char var
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
	if (p[a] >= 97 && p[a] <= 122)
	{
	p[a] -= 32;
	}

	a++;
	}
	return (p);
}


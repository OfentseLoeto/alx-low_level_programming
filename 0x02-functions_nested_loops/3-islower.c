#include "main.h"

/**
 * _islower - Check lowercase character
 *
 * @c: Character to be checked
 *
 * Return: 1 for lowercase charecter and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
	return (1);
	}

	return (0);
}

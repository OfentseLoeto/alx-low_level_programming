#include "main.h"

/**
 * strlen -  returns the length of a string.
 * @s: string to count
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
	c++;
	}

	return (c);
}

#include "main.h"

/**
* _strncat - Concatinanate two strings
 * @dest: The destination value
 * @src: Source value
 * @n: The limit of the concatination
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
	dlen++;
	}

	while (j < n && src[j])
	{
	dest[dlen] = src[j];
	dlen++;
	j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

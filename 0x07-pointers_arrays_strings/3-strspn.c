#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Source string
 * @accept: Acceptd string
 *
 * Return: The number of bytes in the init segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])

	{
	b = 0;

	while (s[b] != 32)

	{
	if (accept[a] == s[b])

	{
	t++;
	}
	b++;
	}
	a++;
	}

	return (t);
}

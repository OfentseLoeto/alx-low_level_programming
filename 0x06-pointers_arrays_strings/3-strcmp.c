#include "main.h"

/**
 * _strcmp - Compare two string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
	a++;
	}

	while (s2[b])
	{
	b++;
	}

	if (a <= b)
	{
	lim = a;
	}


	while (c <= lim)
	{
	if (s1[c] == s2[c])
	{
	c++;
	continue;
	}

	else
	{
	r = s1[c] - s2[c];
	break;
	}

	c++;
	}
	return (r);
}

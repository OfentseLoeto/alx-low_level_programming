#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenate two string
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: Two concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, m = 0, n = 0, o = 0;

	char *s;

	if (s1 == NULL)
	s1 = "";

	while (s1[i])
		i++;

	while (s2[m])
		m++;

	o = i + m;

	s = malloc((sizeof(char) * o) + 1);

	if (s == NULL)
	return (NULL);
	m = 0;

	while (n < o)

	{
	if (n <= i)
	s[n] = s1[n];
	if (n >= i)
	{
	s[n] = s2[m];
	m++;
	}
	n++;
	}
	s[n] = '\0';
	return (s);
}


#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two string
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, p = 0, q = 0, r = 0;

	char *str;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	i++;

	while (s2[q])
	q++;

	if (n >= q)
	r = i + q;
	else
	r = i + n;

	str = malloc(sizeof(char) * r + 1);

	if (str == NULL)

	return (NULL);
	q = 0;
	while (p < r)
	{
	if (p <= i)
	str[p] = s1[p];
	if (p >= i)
	{
	s2[p] = s2[q];
	q++;
	}
	p++;
	}
	str[p] = '\0';
	return (str);
}

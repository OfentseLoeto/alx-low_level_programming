#include <stdio.h>

/**
 * main - Print numbers of base 16 in lowercase
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}

	for (i = 'a'; i <= 'f'; i--)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}

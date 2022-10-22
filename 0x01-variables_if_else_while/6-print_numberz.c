#include <stdio.h>

/**
 * main - Print the number since 0 to 9
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

	putchar('\n');

	return (0);
}

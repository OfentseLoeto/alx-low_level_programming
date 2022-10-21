#include <stdio>

/**
 * main - Print alphabet in lowercase except q and e
 *
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{

	for (c != 'e' && c != 'q')

	{
	putchar(c);
	}

	}

	putchar(c);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);


	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Print the sum of arguments positive number
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;

	char *g;

	if (argc > 1)

	{
	for (i = 1; i < argc; i++)

	{
	g = argv[i];

	for (j = 1; j < strlen(g); j++)
	{
	if (g[j] < 48 || g[j] > 57)

	{

	printf("Error\n");

	return (1);
	}

	}

	sum += atoi(g);
	g++;
	}

	printf("%d\n", sum);
	}

	else
	{
	printf("0\n");
	}

	return (0);
}


#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: The string to be printed
 * @n: Number of string to be printed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	if (n > 0)
	{

	va_start(args, n);

	while (i < n)
	{

	printf("%d", va_arg(args, int));

	if (i != n - 1 && separator != NULL)

	printf("%s", separator);

	i++;
	}
	va_end(args);
	}

	printf("\n");
}

#include <unistd.h>

/**
 * _putchar - Write the char c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and an errno is set approprieatly
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

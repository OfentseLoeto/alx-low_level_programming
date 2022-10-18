#include "main.h"
#include <unistd.h>

/**
 *_putchar - write the charecter c to stdout
 *
 * @c: the char to be printed
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

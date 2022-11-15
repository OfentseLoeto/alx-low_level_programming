#include <unistd.h>

/**
 * _putchar - write the charecter c to sdtout
 * @c: The charecter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is returned appropriatly
 */

int _Putchar(char c)
{
	return (write(1, &c, 1));
}

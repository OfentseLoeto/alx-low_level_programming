#include "main.h"
#include <unistd.h>

/**
 * _putchar writes the char c to std output
 *
 * @c: the char to be printed
 *
 * Return: On success 1
 */
int _putchar(charc)
{
	return(write(1, &c, 1));
}

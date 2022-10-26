#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character to be checked
 *
 * RETURN: 1 if c is uppercase and 0 otherwise
 */

void _isupper(int c)
{

	int c;

	 c = 'A';

	     printf("%c: %d\n", c, _isupper(c));

	         c = 'a';

		     printf("%c: %d\n", c, _isupper(c));

		         return (0);

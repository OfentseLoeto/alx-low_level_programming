#include "hash_tables.h"


/**
 * key_index - the key find its index
 * @key: key
 * @size: size of the array of a hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

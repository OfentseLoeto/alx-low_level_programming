#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:  is the hash table you want to look into
 * @key: is the key you are loking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *elem;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);

	if (idx >= ht->size)
	return (NULL);

	elem = ht->array[idx];

	while (strcmp(key, elem->key) != 0)
	elem = elem->next;
	return ((elem == NULL) ? NULL : elem->value);
}

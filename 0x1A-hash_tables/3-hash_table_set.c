#include "hash_tables.h"


/**
 * hash_table_set - Add an element to the hash_table
 * @ht: hash table to add
 * @key: The key to add - cannot be an empty string.
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded and 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int idx = 0;
	hash_node_t *elem = NULL, *new_node = NULL;


	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
	return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem && strcmp(key, elem->key) == 0)
	{

	free(elem->value);
	elem->value = strdup(value);
	return (1);
	}

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (0);
}

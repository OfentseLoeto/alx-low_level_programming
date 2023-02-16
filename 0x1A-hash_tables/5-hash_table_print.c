#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht:  a pointer to a hash table to print
 *
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *elem;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
	return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
	if (ht->array[i] != NULL)
	{

	if (comma_flag == 1)
	printf(", ");

	elem = ht->array[i];

	while (elem != NULL)
	{

	printf("'%s': '%s'", elem->key, elem->value);
	elem = elem->next;

	if (elem != NULL)
	printf(", ");
	}

	comma_flag = 1;
	}
	}

	printf("{\n");
}

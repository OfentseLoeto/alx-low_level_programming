#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always Success
 */

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "Betty", "COOL");

	return (EXIT_SUCCESS);
}

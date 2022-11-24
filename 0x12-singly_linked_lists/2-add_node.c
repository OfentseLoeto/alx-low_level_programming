#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Input
 * @str: string
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	int count;

	count = 0;

	list_t *node;

	if (head == NULL)

	return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)

	return (NULL);


	for (i = 0; str[i] != '\0'; i++)

	count++;

	node->len = i;
	node->str = strdup(str);
	node->next = *head;

	*head = node;

	return (node);

}

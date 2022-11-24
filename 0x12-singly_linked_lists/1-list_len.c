#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: Input
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	if (h == NULL)

	return (0);

	while (h != NULL)

	{

	count++;

	h = h->next;
	}

	return (count);
}

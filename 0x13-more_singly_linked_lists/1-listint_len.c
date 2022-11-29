#include "lists.h"
#include <stdio.h>


/**
 * listint_len - Count the elements of a linked list
 * @h: Head of a linked list
 *
 *Return: The number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)

	{
	while (h)

	{

	h = h->next;

	count++;

	}

	}

	return (count);
}

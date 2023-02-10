#include "lists.h"

/**
 * print_dlistint = print all elements of a dlistint list
 * @h: pointer to the start of a linked list
 *
 * Return: number of nodes
 *
 * Description: doubly linked list node structure
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)

	{

	printf("%d\n", h->n);
	h = h->next;
	}

	return (i);
}



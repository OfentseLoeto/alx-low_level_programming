#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a certain index
 * @head: pointer to node
 * @index: index
 *
 * Return: address of node atindex
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
	return (NULL);


	while (head->prev)

	head = head->prev;

	while (head)

	{
	if (n == index)
	return (head);

	head = head->next;
	n++;
	}

	return (NULL);
}


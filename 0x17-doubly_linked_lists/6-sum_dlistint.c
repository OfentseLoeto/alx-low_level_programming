#include "lists.h"

/**
 * sum_dlistint - sum of all the datta in a linked list
 * @head: pointer to a linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (sum);


	while (head->prev)

	{
	head = head->prev;
	}

	while (head)

	{

	sum += head->n;
	head = head->next;
	}

	return (sum);
}


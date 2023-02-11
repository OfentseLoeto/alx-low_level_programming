#include "lists.h"

/**
 * free_dlistint - free dlistint list
 * @head: doubly linked list
 *
 * Return: voide
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	if (head == NULL)
	return;

	while (head->prev)
	{

	head = head->prev;
	}

	while (head)
	{

	temp = head->next;

	free(head);
	head = temp;
	}

	free(temp);
}

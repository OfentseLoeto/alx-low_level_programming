#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Head of a linked list
 *
 * Return: Nothing
 */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)

	{

	while (head)

	{

	amount += head->n;
	head = head->next;
	}
	}

	return (amount);
}

#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - Free listint_t list
 * @head: Head of a linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (head)

	{

	while (*head)
	{

	temp = (*head);
	*head = (*head)->next;
	free(temp);
	}
	}

	else
	{
	return;
	}
	free(*head);


	head = 0;
}


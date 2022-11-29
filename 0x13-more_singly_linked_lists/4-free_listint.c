#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Free a listint_t list
 * @head: Head of a linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)

	{

	temp = head;
	head = head->next;

	free(temp);
	}

	free(head);
}

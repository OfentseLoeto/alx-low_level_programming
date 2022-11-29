#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  Returns the nth node of a listint_t linked list
 * @index: Is the index of the node, starting at 0
 * @head: Head of the linked list
 * Return: Nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)

	{

	while (head)

	{

	if (count == index)

	return (head);
	head = head->next;

	count++;
	}

	}

	return (NULL);
}

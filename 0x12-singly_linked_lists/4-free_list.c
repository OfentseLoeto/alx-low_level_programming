
#include "lists.h"

/**
 * free_list - Free a linked list
 * @head: The pointer to the first node in the linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{

	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}

	free(head);
}

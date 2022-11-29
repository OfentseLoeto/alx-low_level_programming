#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: Head of a linked list
 * @n: The number to add to the new node
 *
 *Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *new_list;

	if (head != NULL)

	{

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
	return (NULL);

	new_list->n = n;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
	}

	return (NULL);
}

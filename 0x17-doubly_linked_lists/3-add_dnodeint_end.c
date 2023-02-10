#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a nodeint_t
 * @head: pointer to list
 * @n: integer
 *
 * Return: pointer to the new node
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{

	*head = new_node;
	return (new_node);

	}
	else
	{

	while (temp->next != NULL)
	temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	}
	return (new_node);
}

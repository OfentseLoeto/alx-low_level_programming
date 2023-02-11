#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * main - check the code
 *
 * Return: EXIT_SUCCESS
 */

int main(void)
{

	dlistint_t *head;

	head = NULL;

	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}

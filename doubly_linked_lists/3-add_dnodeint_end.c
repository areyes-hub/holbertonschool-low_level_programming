#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 * @head: first param
 * @n: second param
 * Return: The address of the new element, else, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp;

	node = malloc(sizeof(dlistint_t));
	node->n = n;
	node->next = NULL;

	temp = (*head);
	if ((*head) == NULL)
	{
		node->prev = NULL;
		(*head) = node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	node->prev = temp;
	return (node);
}

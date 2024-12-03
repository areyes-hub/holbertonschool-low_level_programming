#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - Adds a new node at the beggining of the list
 * @head: first param
 * @n: second param
 * Return: The address of the new element, else NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->next = (*head);
	temp->prev =NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = temp;
	}
	(*head) = temp;
	return (*head);
}

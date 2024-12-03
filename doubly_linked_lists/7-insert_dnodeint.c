#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: first param
 * @idx: second param
 * @n: third param
 * Return: The address of the new node. Else, NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0;
	dlistint_t *temp = *h;
	dlistint_t *node;
	dlistint_t *temp2;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	if (idx > size)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(h, (const int)n);
	}
	else if (idx == size)
	{
		add_dnodeint_end(h, (const int)n);
	}
	else
	{
		temp = *h;
		node = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		while (idx-- > 1)
		{
			temp = temp->next;
		}
		temp2 = temp->next;
		node->next = temp2;
		node->prev = temp;
		temp->next = node;
		if (temp2 != NULL)
		{
			temp2->prev = node;
		}
	}
	return (node);
}

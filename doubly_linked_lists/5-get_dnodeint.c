#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: first param
 * @index: second param
 * Return: The requested node. Else, NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}

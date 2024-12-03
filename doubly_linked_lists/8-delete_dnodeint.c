#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: first param
 * @index: second param
 * Return: On success 1. Else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (index == 0 && (*head))
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
		}
		else
		{
			*head = NULL;
		}
		return (1);
	}
	while (i < index - 1 && node)
	{
		node = node->next;
		i++;
	}
	if (node)
	{
		temp = node->next;
		if (temp->next)
		{
			temp->next->prev = node;
		}
		node->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}

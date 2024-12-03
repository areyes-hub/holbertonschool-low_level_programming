#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * sum_dlistint - sums all the data of a doubly linked list
 * @head: first param
 * Return: The sum of all the data in a doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}

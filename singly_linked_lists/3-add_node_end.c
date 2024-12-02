#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: first param
 * @str: second param
 * Return: The address of the new element, else NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *ptr;
	list_t *temp;
	int len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = dup;
	ptr->next = NULL;
	for (len = 0; str[len]; len++);
	ptr->len = len;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}

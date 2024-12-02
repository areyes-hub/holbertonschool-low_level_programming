#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beggining of a list
 * @head: first param
 * @str: second param
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *ptr;
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
	for (len = 0; str[len]; len++)
		;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

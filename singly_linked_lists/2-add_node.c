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
	ptr->len = strlen(dup);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

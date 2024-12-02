#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - Frees a linked list
 * @head: parameter to evaluate
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *ptr;
	list_t *aux;

	ptr = head;
	while (ptr != NULL)
	{
		aux = ptr;
		ptr = ptr->next;
		free(aux->str);
		free(aux);
	}
	head = NULL;
}

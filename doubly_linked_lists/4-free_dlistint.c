#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dlistint - Frees a doubly linked list
 * @head: parameter to evaluate
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *aux;

	ptr = head;
	while (ptr != NULL)
	{
		aux = ptr;
		ptr = ptr->next;
		/*free(aux->n);*/
		free(aux);
	}
	head = NULL;
}

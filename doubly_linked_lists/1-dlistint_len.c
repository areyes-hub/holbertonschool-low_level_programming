#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - Returns the number of elements
 * @h: parameter to evaluate
 * Return: The number of elements in a doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

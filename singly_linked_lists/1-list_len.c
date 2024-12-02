#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: parameter to evaluate
 * Return: number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	int len = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

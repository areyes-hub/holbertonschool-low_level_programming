#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list
 * @h: parameter
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	ptr = h;
	while (ptr)
	{
		if (ptr->str == NULL)
		{
			ptr = ptr->next;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

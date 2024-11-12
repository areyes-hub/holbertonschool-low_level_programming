#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b: parameter to evaluate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	if (b == 0)
	{
		return (NULL);
	}
	alloc = malloc(b);
	if (alloc == NULL)
		return (alloc);
	return (alloc);
}

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

	alloc = malloc(b);
	if (alloc == NULL || b == 0)
		return (NULL);
	return (alloc);
}

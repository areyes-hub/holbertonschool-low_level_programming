#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: first parameter
 * @size: second parameter
 * Return: A pointer to the memory created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size / sizeof(unsigned int); i++)
	{
		((unsigned int *)arr)[i] = 0;
	}
	return (arr);
}

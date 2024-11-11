#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars
 * @size: size of the array
 * @c: initializer
 * Return: A pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

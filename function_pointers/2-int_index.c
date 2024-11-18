#include "function_pointers.h"
#include <ctype.h>
/**
 * int_index - Searches for an integer
 * @array: array to iterate
 * @size: size of the array
 * @cmp: function to execute
 * Return: The index of the first element
 * for which cmp doesn't return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}

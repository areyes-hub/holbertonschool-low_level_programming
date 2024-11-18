#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each element of an array
 * @array: array to iterate
 * @size: size of mentioned array
 * @action: function to execute
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

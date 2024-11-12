#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: min value
 * @max: max value
 * Return: A pointer to the newly created array, else NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int count;
	int i;

	count = max - min + 1;
	arr = malloc(count * sizeof(int));
	if (count < 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}

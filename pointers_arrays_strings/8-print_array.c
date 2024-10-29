#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: first parameter
 * @n: second parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int len = 0;
	int real_len;
	int item = 0;

	while (a[item] != '\0')
	{
		len++;
		item++;
		real_len = len - 1;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == real_len)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}

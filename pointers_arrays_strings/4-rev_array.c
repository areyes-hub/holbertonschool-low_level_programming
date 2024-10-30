#include "main.h"
/**
 * reverse_array - Reverses an array
 * @a: Parameter to evaluate
 * @n: Size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int item;
	int temp;

	for (item = 0; item < n--; item++)
	{
		temp = *(a + item);
		*(a + item) = *(a + n);
		*(a + n) = temp;
	}
}

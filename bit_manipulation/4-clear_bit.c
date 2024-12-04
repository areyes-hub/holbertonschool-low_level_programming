#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: first parameter
 * @index: second parameter
 * Return: On success, 1. Else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((int)*n < 0 || (int)index < 0)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

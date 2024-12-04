#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: first parameter
 * @index: second parameter
 * Return: On success, 1. Else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int bit;*/

	if ((int)*n < 0 || (int)index < 0)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}

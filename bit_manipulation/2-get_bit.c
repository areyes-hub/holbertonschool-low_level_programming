#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: first param
 * @index: second param
 * Return: The value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	unsigned int bit;

	if ((int)n < 0 || (int)index < 0)
	{
		return (-1);
	}
	mask = 1 << index;
	bit = (n & mask) >> index;
	return (bit);
}

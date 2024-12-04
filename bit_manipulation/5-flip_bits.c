#include "main.h"
/**
 * flip_bits - returns the number of bits need to flip to
 * get from one number to another
 * @n: first param
 * @m: second param
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
/**
 * count_set_bits - counts the bits
 * @n: parameter to check
 * Return: The bit count.
 */
unsigned int count_set_bits(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

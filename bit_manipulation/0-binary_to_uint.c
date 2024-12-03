#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: parameter to evaluate
 * Return: On success, the converted number. Else, 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	const char *ptr;
	unsigned int decval = 1;
	int len = 0;
	int i;

	ptr = b;
	while (*ptr++ != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}

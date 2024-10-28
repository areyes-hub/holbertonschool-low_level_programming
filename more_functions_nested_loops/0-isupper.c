#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: parameter to evaluate
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _isdigit - Checks if the input is a digit
 * @c: parameter to evaluate
 * Return: 1 if is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}

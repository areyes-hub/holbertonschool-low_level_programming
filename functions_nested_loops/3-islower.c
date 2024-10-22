#include "main.h"
/**
 * _islower - Checks for lower case letters
 * @c: parameter to be checked
 * Return: 1 if is lower case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

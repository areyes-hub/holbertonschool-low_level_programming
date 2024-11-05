#include "main.h"
/**
 * _strlen_recursion - Computes the length of a string
 * @s: parameter to evaluate
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

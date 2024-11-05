#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: parameter to evaluate
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_puts_recursion(s++);
	}
	_putchar(*s);
}

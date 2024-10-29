#include "main.h"
/**
 * print_rev - Prints a reversed string
 * @s: Parameter to evaluate
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int item = 0;
	int i;

	while (s[item] != '\0')
	{
		len++;
		item++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

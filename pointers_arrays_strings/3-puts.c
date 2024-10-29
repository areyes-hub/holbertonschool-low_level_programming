#include "main.h"
/**
 * _puts - Prints a string
 * @str: Parameter to evaluate
 * Return: void
 */
void _puts(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		_putchar(str[letter]);
		letter++;
	}
	_putchar(10);
}

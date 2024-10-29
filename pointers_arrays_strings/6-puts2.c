#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: Parameter to evaluate
 * Return: void
 */
void puts2(char *str)
{
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
	{
		if (ch % 2 == 0)
		{
			_putchar(str[ch]);
		}
	}
	_putchar('\n');
}

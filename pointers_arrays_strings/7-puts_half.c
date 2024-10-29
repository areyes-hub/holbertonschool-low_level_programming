#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Parameter to evaluate
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int item = 0;
	int half;
	int i;

	while (str[item] != '\0')
	{
		item++;
		len++;
		if (len % 2 == 0)
		{
			half = len / 2;
		}
		else
		{
			half = (len + 1) / 2;
		}
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: parameter to be evaluated
 * Return: void
 */
void print_diagonal(int n)
{
	int gap;
	int line;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (gap = 0; gap < n; gap++)
	{
		for (line = 0; line < gap; line++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}

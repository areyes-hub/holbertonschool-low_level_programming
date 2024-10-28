#include "main.h"
/**
 * print_line - Prints '_' n number of times
 * @n: parameter to evaluate
 * Return: void
 */
void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
	{
		_putchar(95);
	}
	_putchar(10);
}


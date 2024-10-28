#include "main.h"
/**
 * print_square - Prints a square of n size
 * @size: Parameter to evaluate
 * Return: void
 */
void print_square(int size)
{
	int lines;
	int blocks;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (lines = 0; lines < size; lines++)
	{
		for (blocks = 0; blocks < size; blocks++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}

#include "main.h"
/**
 * print_triangle - Prints a triangle of n size
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int gap = 0;
	int block = 0;
	int space;

	if (size > 0)
	{
		while (gap < size)
		{
			space = size - gap - 1;
			while (block < size)
			{
				if (space > block)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				block++;
			}
			gap++;
			block = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_numbers - Print the numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}

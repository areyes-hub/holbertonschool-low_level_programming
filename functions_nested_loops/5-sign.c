#include "main.h"
/**
 * print_sign - Prints the input number and its sign
 * @n: parameter to be checked
 * Return: 1 if positive -1 if negative 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

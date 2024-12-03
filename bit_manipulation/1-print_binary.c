#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter to evaluate
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	char bin[32];
	int i = 0, j, remainder;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		remainder = n % 2;
		if (remainder < 10)
		{
			bin[i++] = remainder + '0';
		}
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin[j]);
	}
}

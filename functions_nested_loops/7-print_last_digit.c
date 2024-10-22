#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: parameter to be evaluated
 * Return: Last digit of input number
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
	{
		result *= -1;
	}
	_putchar(result + '0');
	return (result);
}

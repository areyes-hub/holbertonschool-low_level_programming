#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: parameter to be evaluated
 * Return: Last digit of input number
 */
int print_last_digit(int n)
{
	return (n %= 10);
}

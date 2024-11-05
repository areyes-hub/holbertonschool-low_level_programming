#include "main.h"
/**
 * is_prime_number - Computes if a number is prime or not
 * @n: parameter to evaluate
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 * is_prime - checks if input is a prime number
 * @num: first parameter
 * @mult: second parameter
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int num, int mult)
{
	if (num <= 1)
	{
		return (0);
	}
	else if (num == 2)
	{
		return (1);
	}
	else if (num % mult == 0)
	{
		return (0);
	}
	else if (mult >= num / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(num, mult + 1));
	}
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters
 * @n: number of parameters
 * @...: parameters to evaluate
 * Return: Te sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

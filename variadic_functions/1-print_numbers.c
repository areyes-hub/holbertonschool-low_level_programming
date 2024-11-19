#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints given numbers
 * @separator: character between printed arguments
 * @n: number of arguments
 * @...: parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
		{
			break;
		}
		printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}

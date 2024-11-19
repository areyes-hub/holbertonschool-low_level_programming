#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings given
 * @separator: character to print between strings
 * @n: number of arguments
 * @...: parameters
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char*);
		printf("%s", arg);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		if (i == n - 1)
		{
			break;
		}
		printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}

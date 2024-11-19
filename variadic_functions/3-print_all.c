#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: list of data types
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *signs;
	int length, i, j;

	i = 0;
	j = 0;
	signs = format;
	length = strlen(format);
	va_start(args, format);
	while (i < length)
	{
		char *letter = va_arg(args, char*);

		if (*signs == 'c')
		{
			printf("%s, ", letter);
		}
		printf("%s, ", letter);
		i++;
		signs++;
	}
	while (j < length)
	{
		double num = va_arg(args, double);

		if (*signs == 'f')
		{
			printf("%f, ", num);
		}
		printf("%.0f, ", num);
		j++;
		signs++;
	}
	printf("\n");
	va_end(args);
}

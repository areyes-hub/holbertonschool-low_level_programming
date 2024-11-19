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
	print_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	char *separator;
	int i, j;

	i = 0;
	j = 0;
	separator = "";
	va_start(args, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(args);
}
/**
 * print_char - prints characters
 * @args: argument pointer
 * Return: void.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an integer
 * @args: argument pointer
 * Return: void.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_string - prints a string
 * @args: argument pointer
 * Return: void.
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_float - prints a floating point number
 * @args: argument pointer
 * Return: void.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

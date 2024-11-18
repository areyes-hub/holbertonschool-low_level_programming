#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: first param
 * @f: second param (function pointer)
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

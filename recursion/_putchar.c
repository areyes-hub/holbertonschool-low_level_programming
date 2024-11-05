#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints a character to the screen
 * @c: parameter to evaluate
 * Return: A single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

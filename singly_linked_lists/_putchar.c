#include <unistd.h>
/**
 * _putchar - prints a single character
 * @c: parameter to evaluate
 * Return: A single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

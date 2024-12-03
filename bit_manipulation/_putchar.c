#include <unistd.h>
/**
 * _putchar - prints one character
 * @c: parameter to evaluate
 * Return: A single character.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>
/**
 * _putchar - Writes to stdout
 * @c: character to print
 * Return: On success 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

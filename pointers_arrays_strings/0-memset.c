#include "main.h"
/**
 * _memset - Fills the memory with a constant byte
 * @s: First parameter
 * @b: Second parameter
 * @n: Third parameter
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
	s[i] = '\0';
}

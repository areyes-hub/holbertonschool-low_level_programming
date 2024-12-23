#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

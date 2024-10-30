#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: The resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int item = 0;

	while (*(src + item) != '\0' && item < n)
	{
		*(dest + item) = *(src + item);
		item++;
	}
	while (item < n)
	{
		*(dest + item) = '\0';
		item++;
	}
	return (dest);
}

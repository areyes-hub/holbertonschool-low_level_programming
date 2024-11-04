#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: Points to the byte that matches one of the bytes in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s - 1);
		}
		s++;
		accept++;
	}
	return (s);
}

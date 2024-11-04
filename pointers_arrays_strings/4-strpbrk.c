#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: Points to the byte that matches one of the bytes in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			if (*(accept + i) == '\0')
			{
				return (0);
			}
		}
	}
	return (s + i);
}

#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: First parameter
 * @c: Second parameter
 * Return: A pointer to the first occurrance of the character, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((s + j));
		}
		else if (c == '\0')
		{
			break;
		}
		j++;
	}
	return (0);
}

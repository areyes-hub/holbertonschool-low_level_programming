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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}

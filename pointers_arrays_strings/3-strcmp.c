#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings match, any other value if they dont
 */
int _strcmp(char *s1, char *s2)
{
	int item = 0;

	while (*(s1 + item) != '\0' && *(s2 + item) != '\0')
	{
		if (*(s1 + item) != *(s2 + item))
		{
			return (*(s1 + item) - *(s2 + item));
		}
		item++;
	}
	return (0);
}

#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: parameter to evaluate
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int item = 0;

	while (s[item] != '\0')
	{
		if (s[item] == ' ')
		{
			s[item + 1] = s[item + 1] - 32;
		}
		item++;
	}
	return (s);
}

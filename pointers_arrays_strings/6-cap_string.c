#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: parameter to evaluate
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int item = 0;

	while (s[item])
	{
		while (!(s[item] >= 'a' && s[item] <= 'z'))
		{
			item++;
		}
		if (s[item - 1] == ' ' ||
		    s[item - 1] == '\t' ||
		    s[item - 1] == '\n' ||
		    s[item - 1] == ',' ||
		    s[item - 1] == ';' ||
		    s[item - 1] == '.' ||
		    s[item - 1] == '!' ||
		    s[item - 1] == '?' ||
		    s[item - 1] == '"' ||
		    s[item - 1] == '(' ||
		    s[item - 1] == ')' ||
		    s[item - 1] == '{' ||
		    s[item - 1] == '}' ||
		    item == 0)
		{
			s[item] -= 32;
		}
		item++;
	}
	return (s);
}

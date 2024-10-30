#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: Parameter to evaluate
 * Return: String converted to uppercase
 */
char *string_toupper(char *s)
{
	int item = 0;

	while (*(s + item) != '\0')
	{
		if (*(s + item) >= 'a' && *(s + item) <= 'z')
		{
			*(s + item) -= 32;
		}
		item++;
	}
	return (s);
}

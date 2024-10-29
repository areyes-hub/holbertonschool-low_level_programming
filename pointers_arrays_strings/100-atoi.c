#include "main.h"
/**
 * _atoi - Converts a string to an int
 * @s: Parameter to check
 * Return: The converted integer, otherwise 0.
 */
int _atoi(char *s)
{
	int i;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '/' && s[i] < ':')
		{
			result = (result * 10) + (s[i] - '0');
		}
	}
	return (result);
}

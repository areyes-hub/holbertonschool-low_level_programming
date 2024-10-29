#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: parameter to evaluate
 * Return: The length of s
 */
int _strlen(char *s)
{
	int len = 0;
	int item = 0;

	while (s[item] != '\0')
	{
		len++;
		item++;
	}
	return (len);
}

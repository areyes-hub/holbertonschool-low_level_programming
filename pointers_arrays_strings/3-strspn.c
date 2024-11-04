#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: Number of in a segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;
	int i;
	int j;

	len = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
			}
		}
	}
	return (len + 1);
}

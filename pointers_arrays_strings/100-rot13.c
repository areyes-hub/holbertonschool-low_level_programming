#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @s: String to encode
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i;
	char *r = s;
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == a[i])
			{
				*s = rot[i];
				break;
			}
		}
		s++;
	}
	return (r);
}

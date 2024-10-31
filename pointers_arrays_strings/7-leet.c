#include "main.h"
/**
 * leet - Encode a string into 1337
 * @s: Parameter to evaluate
 * Return: Encoded string
 */
char *leet(char *s)
{
	char *r = s;
	char n[] = {0, 1, 3, 4, 7};
	char a[] = {'o', 'l', 'e', 'a', 't'};
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = n[i] + '0';
			}
		}
		s++;
	}
	return (r);
}

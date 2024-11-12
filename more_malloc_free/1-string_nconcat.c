#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Cocatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use
 * Return: Pointer to the new string in a newly alloc mem space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz_a = 0, sz_b = 0;
	char *ptr, *new_str;

	ptr = s1;
	if (s1)
	{
		while (*ptr++)
		{
			sz_a++;
		}
	}
	else
	{
		s1 = "";
	}
	ptr = s2;
	if (s2)
	{
		while (*ptr++)
		{
			sz_b++;
		}
	}
	else
		s2 = "";
	new_str = malloc(sz_a + sz_b + sizeof(unsigned int));
	if (!new_str)
		return (NULL);

	ptr = new_str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2 && n > 0)
	{
		*ptr++ = *s2++;
		n--;
	}
	*ptr = 0;
	return (new_str);
}

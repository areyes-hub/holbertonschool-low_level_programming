#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: A pointer to the new string in a newly alloc mem space
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int sz_a = 0, sz_b = 0;
	int sz = sz_a + sz_b;
	int i, j;

	while (*s1)
	{
		s1++;
		sz_a++;
	}
	while (*s2)
	{
		s2++;
		sz_b++;
	}
	new_str = malloc(sz * sizeof(char));
	for (i = 0; i < sz_a; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < sz_b && i < sz_b; j++, i++)
	{
		new_str[i] = s2[j];
	}
	return (new_str);
}

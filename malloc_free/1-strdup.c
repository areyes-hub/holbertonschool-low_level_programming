#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Points to a string copy in a new memory allocation
 * @str: The string to duplicate
 * Return: On success, a pointer to the dup string, else NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int sz = 1;
	int s = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[s] != '\0')
	{
		sz++;
		s++;
	}
	dup = malloc(sz * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sz; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

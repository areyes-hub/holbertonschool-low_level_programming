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
	int i;

	dup = malloc(sizeof(*str));
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

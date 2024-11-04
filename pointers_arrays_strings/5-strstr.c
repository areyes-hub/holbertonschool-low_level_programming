#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: Pointer to the begining of located substring else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int count = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + count] != '\0' && haystack[i + count] != '\0' &&
				needle[j + count] == haystack[i + count])
		{
			if (haystack[i + count] != needle[j + count])
			{
				break;
			}
			count++;
		}
		if (needle[j + count] == '\0')
		{
			return (&haystack[i]);
		}
		j++;
		i++;
	}
	return (NULL);
}

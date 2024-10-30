#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings match, any other value if they dont
 */
int _strcmp(char *s1, char *s2)
{
	int cmp1 = 0;
	int cmp2 = 0;
	int item1 = 0;
	int item2 = 0;

	while (*(s1 + item1) != '\0')
	{
		cmp1 += sizeof(*(s1 + item1));
		item1++;
	}
	while (*(s2 + item2) != '\0')
	{
		cmp2 += sizeof(*(s2 + item2));
		item2++;
	}
	if (cmp1 < cmp2)
	{
		return (-15);
	}
	else if (cmp2 < cmp1)
	{
		return (15);
	}
	return (0);
}

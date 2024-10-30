#include "main.h"
/**
 * _strcat - Appends source string to destination string
 * @dest: first parameter
 * @src: second parameter
 * Return: Pointer to resulting destination string
 */
char *_strcat(char *dest, char *src)
{
	int itemD = 0;
	int itemS = 0;

	while (*(dest + itemD) != '\0')
	{
		itemD++;
	}
	while (*(src + itemS) != '\0')
	{
		*(dest + itemD) = *(src + itemS);
		itemD++;
		itemS++;
	}
	*(dest + itemD) = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes to concat
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int itemD = 0;
	int itemS = 0;

	while (*(dest + itemD) != '\0')
	{
		itemD++;
	}
	while (itemS < n && *(src + itemS) != '\0')
	{
		*(dest + itemD) = *(src + itemS);
		itemD++;
		itemS++;
	}
	*(dest + itemD) = '\0';
	return (dest);
}

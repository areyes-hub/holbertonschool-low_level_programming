#include "main.h"
/**
 * _strcpy - Copies a string from a source to a destination
 * @dest: destination file
 * @src: source file
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int position = 0;

	while (*(src + position) != '\0')
	{
		*(dest + position) = *(src + position);
		position++;
	}
	*(dest + position) = '\0';
	return (dest);
}

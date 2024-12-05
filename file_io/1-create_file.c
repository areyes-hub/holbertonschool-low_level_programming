#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: what will be written to the file
 * Return: On success 1, else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int len = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
	{
		return (-1);
	}
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
		{
			inlen++;
		}
		len = write(new_file, text_content, inlen);
	}
	if (close(new_file == -1 || inlen != len))
	{
		return (-1);
	}
	return (1);
}

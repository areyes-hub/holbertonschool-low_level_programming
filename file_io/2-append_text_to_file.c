#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: file to append to
 * @text_content: content to append
 * Return: On success 1, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
		{
			inlen++;
		}
		len = write(file, text_content, inlen);
	}
	if (close(file == -1 || inlen != len))
	{
		return (-1);
	}
	return (1);
}

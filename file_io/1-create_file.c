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
	int new_file, file;

	file = sizeof(text_content) - 2;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		new_file = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		close(new_file);
	}
	else
	{
		new_file = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		write(new_file, text_content, file);
		close(new_file);
	}
	return (1);
}

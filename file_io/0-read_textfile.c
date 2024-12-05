#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a textfile and writes it to the POSIX
 * @filename: first parameter
 * @letters: second parameter
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len, chars;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	len = read(file, buff, letters);
	if (len == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	chars = write(STDOUT_FILENO, buff, len);
	free(buff);
	close(file);
	if (chars != len)
	{
		return (0);
	}
	return (len);
}

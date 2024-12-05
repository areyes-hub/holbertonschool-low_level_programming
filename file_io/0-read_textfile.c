#include "main.h"
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
	ssize_t n;
	int file;
	char buff[1024];

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	n = read(file, buff, letters);
	write(1, buff, n);
	close(file);
	return (n);
}

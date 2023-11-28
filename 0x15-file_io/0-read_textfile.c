#include "main.h"
#include <stdlib.h>

/**
*read_textfile - function reads text in file and
*prints to the POSIX standard output
*@filename: name of file to read
*@letters: num of char being read
*Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t l, w;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	l = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, l);

	close(fd);
	free(buffer);

	return (w);
}

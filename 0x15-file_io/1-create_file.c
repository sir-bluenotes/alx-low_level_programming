#include "main.h"

/**
*create_file - creates a file
*@filename: a pointer to created file
*@text_content: pointer to str to write the file
*Return: 0
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;
	rwr = write(fd, text_content, n);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}


#include "main.h"

/**
*append_text_to_file- appends text at file end
*@filename: pointer to file name
*@text_content: string to add to file end
*Return: 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
		rwr = write(fd, text_content, n);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

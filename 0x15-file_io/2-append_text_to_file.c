#include "main.h"

/**
 * append_text_to_file - append text
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to append to the file
 * Return:1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr = 0, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		wr = write(fd, text_content, len);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

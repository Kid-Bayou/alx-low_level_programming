#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the std output
 * @filename: contain the name of the file to read
 * @letters: number of letters to read
 * Return: the number of char writed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t wr = 0, rd = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);

	return (wr);
}

#include "main.h"

/**
 * read_textfile - reads the contents of a file
 * @filename: path of the file we want to read
 * @letters: Number of chars to read and write
 * Return: number of letters read and printed
 * 0 if there is some error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int handler, wr, rd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL || letters <= 0)
	{
		free(buffer);
		return (0);
	}
	handler = open(filename, O_RDWR);
	if (handler == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(handler, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(handler);
	return (wr);
}


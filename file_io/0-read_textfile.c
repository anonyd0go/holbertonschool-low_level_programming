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

	if (filename == NULL)
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
	close(handler);
	free(buffer);
	return (wr);
}


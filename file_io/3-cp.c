#include "main.h"
int cp(char *file_from, char *file_to);

/**
 * main - cp mainlogic
 * @argc: argument count
 * @argv: Argument vector
 * Return: Always 0
 * 98 if src file error
 * 99 if destination error
 * 100 if unable to close src
 */
int main(int argc, char **argv)
{
	int result;
	int uerr = 97, src_err = 98, dest_err = 99;
	int close_err = 100;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(uerr);
	}

	result = cp(argv[1], argv[2]);

	if (result == src_err)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(src_err);
	}
	else if (result == dest_err)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(dest_err);
	}
	else if (result == close_err)
	{
		exit(close_err);
	}

	return (0);
}


/**
 * cp - Copies a file from one place to annother
 * @file_from: Spurce file
 * @file_to: Destination file
 * Return: 0 if successful
 * 98 if src file error
 * 99 if destination error
 * 100 if unable to close src
 */
int cp(char *file_from, char *file_to)
{
	int srfd, tofd, srrd, towr;
	int close_src, close_dest;
	int f_err = -1, src_err = 98, dest_err = 99;
	int close_err = 100;
	char *buffer[1024];

	if (!file_from)
		return (src_err);
	if (!file_to)
		return (dest_err);

	srfd = open(file_from, O_RDONLY);
	if (srfd == f_err)
		return (src_err);
	tofd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tofd == f_err)
		return (dest_err);

	srrd = read(srfd, buffer, 1024);
	if (srrd == f_err)
		return (src_err);
	while (srrd > 0)
	{
		towr = write(tofd, buffer, srrd);
		if (towr == f_err)
			return (dest_err);
		srrd = read(srfd, buffer, 1024);
		if (srrd == f_err)
			return (src_err);
	}

	close_src = close(srfd);
	if (close_src == f_err)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srfd);
		return (close_err);
	}
	close_dest = close(tofd);
	if (close_dest == f_err)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tofd);
		return (close_err);
	}
	return (0);
}

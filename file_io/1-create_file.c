#include "main.h"

/**
 * create_file - Creates a file
 * @filename: file that will be crated
 * @text_content: contents of the new file
 * Return: 1 on success, -1 if faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fhndl, wd, clen;

	if (filename == NULL)
		return (-1);

	fhndl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fhndl == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (clen = 0 ; text_content[clen] != '\0'; clen++)
			continue;
		wd = write(fhndl, text_content, clen);
	}
	if (wd == -1)
		return (-1);

	close(fhndl);
	return (1);
}

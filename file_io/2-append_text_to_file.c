#include "main.h"

/**
 * append_text_to_file - nappends text to a file
 * @filename: pathe to the file
 * @text_content: What will be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fhd, tlen, ap;

	if (filename == NULL)
		return (-1);
	fhd = open(filename, O_APPEND | O_WRONLY);
	if (fhd == -1)
		return (-1);
	if (text_content)
	{
		for (tlen = 0; text_content[tlen]; tlen++)
			continue;
		ap = write(fhd, text_content, tlen);
		if (ap == -1)
		{
			close(fhd);
			return (-1);
		}
	}
	close(fhd);
	return (1);
}

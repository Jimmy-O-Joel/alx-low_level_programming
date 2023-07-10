#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *
 *@filename: file
 *@text_content: content to be added
 *
 *Return: 1 if file exists. -1 if fails or file doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int r_wr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		r_wr = write(file_d, text_content, nletters);

		if (r_wr == -1)
			return (-1);
	}
	close(file_d);

	return (1);
}

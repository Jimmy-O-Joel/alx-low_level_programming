#include "main.h"

/**
 *create_file - creates a file
 *@filename: file
 *@text_content: content written on the file
 *
 *Return: 1 if success, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int r_wr;

	if (!filename)
		return (-1);

	file_d = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	r_wr = write(file_d, text_content, nletters);

	if (r_wr == -1)
		return (-1);

	close(file_d);

	return (1);
}

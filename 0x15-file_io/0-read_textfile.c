#include "main.h"

/**
 *read_textfile - reads and prints the letters in a text file
 *
 *@filename: file
 *
 *@letters: no of letters printed
 *
 *Return: no of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	nread = read(file_d, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(file_d);

	free(buffer);

	return (nwrite);
}

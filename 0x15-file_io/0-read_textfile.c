#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to print to STDOUT.
 * @filename: text file being read and interpreted in the code 
 * @letters: number of letters to be read and interpreted in the code
 * Return: w- actual number of bytes read and printed
*  Workings
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t san;
	ssize_t fd;
	ssize_t don;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	san = read(fd, buf, letters);
	don = write(STDOUT_FILENO, buf, san);

	close(fd);
	free(buf);
	return (don);
}

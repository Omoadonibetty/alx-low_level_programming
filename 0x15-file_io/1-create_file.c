#include "main.h"
#include <stdlib.h>


/**
 * create_file - Creates a file in the code.
 * @filename: Pointer to name of the file to create in the code.
 * @text_content: Pointer to a string to write to file in the code.
 * Workings
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, san, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	san = write(fd, text_content, len);


	if (fd == -1 || san == -1)
		return (-1);

	close(fd);

	return (1);
}

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
	int fd; 
`	int san;
lap = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lap = 0; text_content[lap];)
			lap++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	san = write(fd, text_content, lap);

	if (san == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);
}

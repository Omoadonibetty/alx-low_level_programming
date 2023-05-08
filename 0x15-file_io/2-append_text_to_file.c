#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file in the code.
 * @filename: Pointer to name of the file in the code.
 * @text_content: String to add to the end of the file in the code.
 * Workings
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist, user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int san;
	int don;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	san = open(filename, O_WRONLY | O_APPEND);
	don = write(san, text_content, len);

	if (san == -1 || dan == -1)
		return (-1);

	close(san);

	return (1);
}

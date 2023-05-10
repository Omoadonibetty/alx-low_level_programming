#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer in the code
 * @file: Name of file buffer is storing chars for in the code.
 * Workings
 * Return: Pointer to the newly-allocated buffer in the code
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors in the code
 * @fd: File descriptor to be closed in the code
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file in the code
 * @argc: The number of arguments supplied to the program in the code
 * @argv: An array of pointers to the arguments in the code
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist, or cannot be read - exit code 98.
 *              If file_to cannot be created, or written to - exit code 99.
 *              If file_to or file_from cannot, be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int go, in, b, c;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	b = read(go, buffer, 1024);
	in = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (go == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		c = write(in, buffer,b);
		if (in == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		c = read(go, buffer, 1024);
		in = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);

	free(buffer);
	close_file(go);
	close_file(in);

	return (0);
}

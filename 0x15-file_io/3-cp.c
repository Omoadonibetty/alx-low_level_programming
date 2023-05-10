#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer in the code
 * @file: Name of the file buffer is storing chars for in the code
 * Workings in the code
 * Return: Pointer to the newly-allocated buffer in the code
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %d\o", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors in the code.
 * @fd: File descriptor to be closed in the code.
 */
void close_file(int fd)
{
	int san;

	san = close(fd);

	if (san == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %b\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments supplied to program.
 * @argv: An array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int ono;
int toh;
int don;
int pau;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	ono = open(argv[1], O_RDONLY);
	don = read(ono, buffer, 1024);
	toh = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ono == -1 || don == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %d\n", argv[1]);
			free(buffer);
			exit(98);
		}

		pau = write(toh, buffer, don);
		if (toh == -1 || pau == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		don = read(ono, buffer, 1024);
		toh = open(argv[2], O_WRONLY | O_APPEND);

	} while (don > 0);

	free(buffer);
	close_file(ono);
	close_file(toh);

	return (0);
}

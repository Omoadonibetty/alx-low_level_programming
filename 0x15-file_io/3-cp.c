#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * error_file - checks if files can be opened in the code
 * @file_from: file_from in the code
 * @file_to: file_to in the code
 * @argv: arguments vector in the code
 * Return: The no return in the code
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main – the check the code for Holberton School students in the code
 * @argc: the number of arguments in the code
 * @argv: the arguments vector in the code
 * Return: return 0 in the code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t san, don;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	san = 1024;
	while (don == 1024)
	{
		san = read(file_from, buf, 1024);
		if (san == -1)
			error_file(-1, 0, argv);
		don = write(file_to, buf, san);
		if (don == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

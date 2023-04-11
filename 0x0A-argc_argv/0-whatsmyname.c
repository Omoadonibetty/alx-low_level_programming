#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: Always 0 (Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

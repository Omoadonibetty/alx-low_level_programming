#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the in  character c to stdout
 * @c: writes  character to print
 *
 * Return: On success return 1.
 * On error, the value -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

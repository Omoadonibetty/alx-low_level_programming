#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: 1 on sucess.
 * On error, -1 is returned, error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

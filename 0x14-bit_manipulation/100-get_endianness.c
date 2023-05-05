#include "main.h"

/**
 * get_endianness - checks if the  machine is a little or a big end ian
 * Workings and steps
 * Return: show 0 on big, show 1 on little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

#include "main.h"

/**
 * clear_bit - sets value of given bit to show  0
 * @n: pointer to number to be changed
 * @index: index of bit to be  cleared
 * Workings and steps
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

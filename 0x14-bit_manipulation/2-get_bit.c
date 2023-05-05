#include "main.h"

/**
 * get_bit - returns value of bit at an index in decimal number given
 * @n: number to search in the code
 * @index: index of bit in the code
 * Workings abd steps
 * Return: value of the bit on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

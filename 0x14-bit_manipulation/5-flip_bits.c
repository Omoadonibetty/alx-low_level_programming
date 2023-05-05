#include "main.h"

/**
 * flip_bits - counts number of bits to be changed
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Workings and steps
 * Return: number of the bits to be  changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, temp = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			temp++;
	}

	return (temp);
}

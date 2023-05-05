#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal number in the code
 * Workings and steps to get result
 * @n: number print binary
 */
void print_binary(unsigned long int n)
{
	int i, temp = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			temp++;
		}
		else if (temp)
			_putchar('0');
	}
	if (!temp)
		_putchar('0');
}

#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int s;
	int z;

	for (s = 0; s < 8; s++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[s][z]);
		_putchar('\n');
	}
}

#include "main.h"

int actual_sqrt_recursion(int x, int y);

/**
 * _sqrt_recursion – returns natural square root of number
 * @x: number to calculate the square root of
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural
 * square root of number
 * @x: no to calculate the square root of
 * @y: iterator
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (actual_sqrt_recursion(n, y + 1));
}


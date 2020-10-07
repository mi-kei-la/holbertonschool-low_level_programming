#include "holberton.h"

/**
 * _pow_recursion - print the result of x to the power of y
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: value, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (n);
	n = x * _pow_recursion(x, y - 1);
	return (n);
}

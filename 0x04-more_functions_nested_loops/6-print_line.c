#include "holberton.h"

/**
 * print_line - print straight lines
 *
 * @n: parameter
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: parameter
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
		_putchar(10);
}

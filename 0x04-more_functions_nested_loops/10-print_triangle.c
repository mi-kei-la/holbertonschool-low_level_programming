#include "holberton.h"

/**
 * print_triangle - print triangle of #
 *
 * @size: parameter
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b <= (size - a))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

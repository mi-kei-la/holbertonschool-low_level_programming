#include "holberton.h"

/**
 * print_square - print square of pounds
 *
 * @size: parameter, size of square
 *
 */

void print_square(int size)
{
	int a;
	int b;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

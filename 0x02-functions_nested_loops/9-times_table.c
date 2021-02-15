#include "holberton.h"

/**
 * times_table - Print the times table for two digit numbers.
 */

void times_table(void)
{
	int a;
	int b;
	int res;
	int y;
	int z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = a * b;
			y = res / 10;
			z = res % 10;

			if (y != 0)
			{
				_putchar(y + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
			}
			_putchar(z + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}

	}
}

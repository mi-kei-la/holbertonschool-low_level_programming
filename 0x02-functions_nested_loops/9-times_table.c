#include "holberton.h"

/**
 * times_table - entry point
 *
 * Void return
 *
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

			if (y == 0)
			{
				if (b < 9)
				{
					_putchar(z + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(z + '0');
					_putchar('\n');
				}
			}
			else
			{
				if (b < 9)
				{
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
					
			}
		}

	}
}

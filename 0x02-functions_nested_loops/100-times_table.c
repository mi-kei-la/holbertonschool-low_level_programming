#include "holberton.h"

/**
 * print_times_table - entry point
 * @n: parameter
 * print_times_table - print multiplication tables
 */

void print_times_table(int n)
{
	int mul1, mul2, res, med, num1, num2, num3;

	if (n >= 0 && n <= 15)
	{
		for (mul1 = 0; mul1 <= n; mul1++)
		{
			for (mul2 = 0; mul2 <= n; mul2++)
			{
				res = mul1 * mul2;
				med = res / 10;
				num1 = med / 10;
				num2 = med % 10;
				num3 = res % 10;
				if (mul2 != 0)
				{
					if (num1 != 0)
						_putchar(num1 + '0');
					else
						_putchar(' ');
					if (res >= 10)
						_putchar(num2 + '0');
					else
						_putchar(' ');
				}
				_putchar(num3 + '0');
				if (mul2 != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}

#include "holberton.h"

/**
 * print_times_table - Print times table for three digit numbers.
 * @n: parameter
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
				if (mul2 != 0) /* all columns but the first */
				{
					if (num1 != 0)
						_putchar(num1 + '0');
					else
						_putchar(' ');
					if (res >= 10) /* takes into account cases like 101 */
						_putchar(num2 + '0');
					else
						_putchar(' ');
				}
				_putchar(num3 + '0'); /* first column is always one digit in this case */
				if (mul2 != n) /* all columns but the last */
				{
					_putchar(',');
					_putchar(' ');
				}
				else /* last column */
					_putchar('\n');
			}
		}
	}
}

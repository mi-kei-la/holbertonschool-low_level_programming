#include "holberton.h"

/**
 * print_number - print numbers one char each
 *
 * @n: parameter
 */

void print_number(int n)
{
	int ini;
	unsigned int div10_1 = 10;
	unsigned int div10_2 = 10;
	unsigned int div10_3 = 10;
	unsigned int div10_4 = 10;
	int num;
	int count;
	int exp;

	if (n < 0) /* take into account negative numbers */
	{
		n = -n;
		_putchar('-');
	}

	num = n;
	ini = n;
	count = 0;
	while (ini > 9) /* count number of digits */
	{
		ini = num / 10;
		count++;
		num = ini;
	}

	exp = count - 1;
	if (exp >= 18)
	{
		while (exp > 18) /* elevate 10 to the number of digits the number has */
		{
			div10_4 = div10_4 * 10;
			exp--;
		}
	}
	else if (exp >= 12)
	{
		while (exp > 12)
		{
			div10_3 = div10_3 * 10;
			exp--;
		}
	}
	else if (exp >= 6)
	{
		while (exp > 6)
		{
			div10_2 = div10_2 * 10;
			exp--;
		}
	}
	else
	{
		while (exp > 0)
		{
			div10_1 = div10_1 * 10;
			exp--;
		}
	}

	if (count >= 18)
	{
		while (count >= 18) /* take number apart & print each digit */
		{
			_putchar((n / div10_4) + '0');
			n = n % div10_4;
			div10_4 = div10_4 / 10;
			count--;
		}
	}
	else if (count >= 12)
	{
		while (count >= 12)
		{
			_putchar((n / div10_3) + '0');
			n = n % div10_3;
			div10_3 = div10_3 / 10;
			count--;
		}
	}
	else if (count >= 6)
	{
		while (count >= 6)
		{
			_putchar((n / div10_2) + '0');
			n = n % div10_2;
			div10_2 = div10_2 / 10;
			count--;
		}
	}
	else
	{
		while (count >= 0)
		{
			_putchar((n / div10_1) + '0');
			n = n % div10_1;
			div10_1 = div10_1 / 10;
			count--;
		}
	}
}

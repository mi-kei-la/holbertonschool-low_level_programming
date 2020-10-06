#include "holberton.h"

/**
 * print_number - print numbers one char each
 *
 * @n: parameter
 */

void print_number(int n)
{
	int ini;
	unsigned int div10;
	int num;
	int count;
	int exp;

if (n <= 65535)
{
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

	div10 = 10;
	exp = count - 1;
	while (exp > 0) /* elevate 10 to the number of digits the number has */
	{
		div10 = div10 * 10;
		exp--;
	}

	while (count >= 0) /* take number apart & print each digit */
	{
		_putchar((n / div10) + '0');
		n = n % div10;
		div10 = div10 / 10;
		count--;
	}
}
else
_putchar(10);
}

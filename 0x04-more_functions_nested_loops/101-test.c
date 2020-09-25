#include "holberton.h"

/**
 * print_number - print numbers one char each
 *
 * @n: parameter
 */

void print_number(int n)
{
	int a;
	int b;
	int num;
	int count;
	int exp;

	num = n;
	count = 0;
	while (a > 0) /* count number of digits */
	{
		a = num / 10;
		count++;
		num = a;
	}

	b = 10;
	exp = count;
	while (exp >= 0) /* elevate 10 to the number of digits the number has */
	{
		b = b * 10;
		exp--;
	}

	while (count > 0) /* take number apart & print each digit */
	{
		_putchar((num / b) + '0');
		b = b / 10;
		num = num % b;
		count--;
	}
}

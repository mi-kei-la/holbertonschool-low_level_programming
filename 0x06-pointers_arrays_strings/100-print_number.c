#include "holberton.h"

/**
 * print_number - print a number
 *
 * @n: parameter
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	print_nums(n);
}

/**
 * print_nums - recursion for print_number function
 *
 * @x: number to print
 */

void print_nums(int x)
{
	int c = 0;

	if (x / 10)
		print_nums(x / 10);

	if (x < 0)
	{
		c = x % 10;
		_putchar(-c + '0');
	}
	else
	{
		c = x % 10;
		_putchar(c + '0');
	}
}

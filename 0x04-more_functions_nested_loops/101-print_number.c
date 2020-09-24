#include "holberton.h"

/**
 * print_number - print numbers one char each
 *
 * @n: parameter
 */

void print_number(int n)
{
	int first;
	int sec;
	int third;
	int four;
	int mid1;
	int mid2;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	mid1 = n / 10;
	mid2 = mid1 / 10;
	first = mid2 / 10;
	sec = mid2 % 10;
	third = mid1 % 10;
	four = n % 10;

	if (n >= 1000)
		_putchar(first + 48);
	if (n >= 100)
		_putchar(sec + 48);
	if (n >= 10)
		_putchar(third + 48);
	if (n >= 0)
		_putchar(four + '0');
}

#include "holberton.h"

/**
 * print_last_digit - Print last digit of a given number.
 *
 * @a: parameter
 *
 * Return: the value of the last digit
 *
 */

int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		a = a * (-1);
	}

	_putchar('0' + a);
	return (a);
}

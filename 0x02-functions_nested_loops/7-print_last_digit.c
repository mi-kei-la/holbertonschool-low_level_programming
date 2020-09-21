#include "holberton.h"

/**
 * print_last_digit - entry point
 *
 * return value of last digit
 *
 */

int print_last_digit(int a)
{
	a = a % 10;
	_putchar (a);
	return (a);
}

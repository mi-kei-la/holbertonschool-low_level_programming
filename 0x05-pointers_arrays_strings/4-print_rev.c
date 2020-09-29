#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - print string in reverse
 *
 * @s: parameter
 */

void print_rev(char *s)
{
	int x = 0;
	int back;

	while (s[x] != '\0')
	{
		x++;
	}
	for (back = x - 1; back >= 0; back--)
	{
		_putchar(s[back]);
	}
	_putchar(10);
}

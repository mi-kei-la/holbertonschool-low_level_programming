#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - print second half of a string
 *
 * @str: parameter
 */

void puts_half(char *str)
{
	int len, count;

	for (len = 0; str[len] != 0; len++)
	{
	}

	count = 0;

	if (len % 2 != 0)
	{
		for (count = (len - 1 / 2); count < len; count++)
		{
			_putchar(str[count]);
		}
	}
	else
	{
		for (count = (len / 2); count < len; count++)
		{
			_putchar(str[count]);
		}
	}
	_putchar(10);
}

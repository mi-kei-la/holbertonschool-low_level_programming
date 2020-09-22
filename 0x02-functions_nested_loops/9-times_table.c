#include "holberton.h"

/**
 * times_table - entry point
 *
 * Void return
 *
 */

void times_table(void)
{
	char a;
	char b;
	char x;
	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			x = a * b;
			_putchar(x);
			_putchar(';');
		}

	}
}

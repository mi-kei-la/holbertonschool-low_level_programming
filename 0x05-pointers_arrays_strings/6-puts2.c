#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - print every other character from a string
 *
 * @str: parameter
 */

void puts2(char *str)
{
	int x, count;

	for (count = 0; str[count] != '\0'; count++)
	{
	}

	for (x = 0; x < count; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar(10);
}

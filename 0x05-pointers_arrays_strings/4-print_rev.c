#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - print string in reverse
 *
 * @s: parameter
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		printf("%c", *s);
		s--;
		len--;
	}
	putchar(10);
}

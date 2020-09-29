#include "holberton.h"
#include <stdio.h>

/**
 * _puts - print string, followed by new line
 *
 * @str: parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

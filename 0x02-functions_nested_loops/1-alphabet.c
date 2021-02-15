#include "holberton.h"

/**
 * print_alphabet - Prints alphabet followed by a new line.
 *
 * Return: Always 0 (success).
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

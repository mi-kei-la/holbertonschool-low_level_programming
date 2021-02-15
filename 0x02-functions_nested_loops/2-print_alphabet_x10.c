#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, one line each.
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int a;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_most_numbers - print numbers 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		if (nums != 2 && nums != 4)
		_putchar(nums + 48);
	}
	_putchar('\n');
}

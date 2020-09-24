#include "holberton.h"

/**
 * print_numbers - print nums 0-9
 */

void print_numbers(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		_putchar(nums + '0');
	}
	_putchar('\n');
}

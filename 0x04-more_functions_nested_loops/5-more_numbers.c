#include "holberton.h"

/**
 * more_numbers - print numbers 0-14 10 times
 */

void more_numbers(void)
{
	int nums;
	int loop;

	for (loop = 0; loop <= 10; loop++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			if (nums < 10)
				_putchar((nums / 10) + 48);
			_putchar((nums % 10) + 48);
		}
		_putchar('\n');
	}
}

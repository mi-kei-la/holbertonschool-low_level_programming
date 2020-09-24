#include "holberton.h"

/**
 * more_numbers - print numbers 0-14 10 times
 */

void more_numbers(void)
{
	int nums;
	int loop;
	int first;
	int last;

	for (loop = 0; loop <= 10; loop++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			first = nums / 10;
			last = nums % 10;
			if (nums > 9)
			{
				_putchar(first + 48);
			}
			_putchar(last + 48);
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
  * print_binary - print number in binary
  *
  * @n: number to print
  */

void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 4294967296;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			flag = 1;
			_putchar('1');
		}

		else
		{
			if (flag == 1)
				_putchar('0');
		}
		mask = mask >> 1;
	}
}

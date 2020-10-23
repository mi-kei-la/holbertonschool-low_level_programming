#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: string that separates numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numList;
	unsigned int i;
	int x;

	va_start(numList, n);

	for (i = 0; i < (n - 1); i++)
	{
		x = va_arg(numList, int);
		printf("%d", x);
		if (*separator != 0)
			printf("%s", separator);
	}
	x = va_arg(numList, int);
	printf("%d\n", x);
	va_end(numList);
}

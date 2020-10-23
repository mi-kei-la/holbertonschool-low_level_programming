#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - variadic function to print strings
 *
 * @separator: parameter
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *temp;

	va_start(strings, n);
	if (n > 0)
	{
	for (i = 0; i < (n - 1); i++)
	{
		temp = va_arg(strings, char *);
		if (temp != 0)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != 0)
			printf("%s", separator);
	}
	temp = va_arg(strings, char *);
	printf("%s\n", temp);
	}
}

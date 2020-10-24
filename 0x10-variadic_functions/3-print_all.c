#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: type of parameters
 */

void print_all(const char * const format, ...)
{
	int x = 0, y = 0, z = 0, count = 0;
	struct types tipos[] = {
		{'c', *print_char},
		{'i', *print_int},
		{'f', *print_float},
		{'s', *print_string},
		{NULL, NULL}
	};
	va_list argsList;

	while (format[y] != 0) /*count format length*/
	{
		if (format[y] == 'c' || format[y] == 's'
		    || format[y] == 'i' || format[y] == 'f')
		{
			count++;
		}
		y++;
	}

	va_start(argsList, count);

	while (format[x] != 0 && i < 5)
	{
		if (tipos[z].c == format[x])
		{
			tipos[z].f(argsList);
			x++;
		}
		z++;
	}

}

void print_char(va_list)
{
	printf("%c", va_arg(args, char));
}

void print_int(va_list)
{
	printf("%d", va_arg(args, char));
}

void print_float(va_list)
{
	printf("%f", va_arg(args, float));
}

void print_string(va_list)
{
	printf("%s", va_arg(args, char *));
}

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
	int x, z;
	type tipos[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	char *str;

	va_start(args, format);
	str = "";
	x = 0;
	z = 0;
	while (format && format[x])
	{
		z = 0;
		while (z < 4)
		{
			if (tipos[z].c[0] == format[x])
			{
				tipos[z].f(str, args);
				str = ", ";
				break;
			}
			z++;
		}
		x++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_char - print a character
  *
  * @str: separator
  * @args: list of arguments
  */

void print_char(char *str, va_list args)
{
	printf("%s%c", str, va_arg(args, int));
}

/**
  * print_int - print an integer
  *
  * @str: separator
  * @args: list of arguments
  */

void print_int(char *str, va_list args)
{
	printf("%s%d", str, va_arg(args, int));
}

/**
  * print_float - print a float
  *
  * @str: separator
  * @args: list of arguments
  */

void print_float(char *str, va_list args)
{
	printf("%s%f", str, va_arg(args, double));
}

/**
  * print_string - print a string
  *
  * @str: separator
  * @args: list of arguments
  */

void print_string(char *str, va_list args)
{
	char *x;

	x = va_arg(args, char *);
	if (x == NULL || *x == '\0')
		x = "(nil)";

	printf("%s%s", str, x);
}

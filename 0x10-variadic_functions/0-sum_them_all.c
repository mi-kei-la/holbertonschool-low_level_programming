#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum parameters
 *
 * @n: number of arguments
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list argList;
	unsigned int i;
	int sum = 0;

	if (n > 0)
	{
		va_start(argList, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(argList, int);
		}
	}

	va_end(argList);
	return (sum);
}

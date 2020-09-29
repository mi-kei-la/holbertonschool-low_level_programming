#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: parameter
 * @b: parameter
 *
 */

void swap_int(int *a, int *b)
{
	int a2 = *a;
	int b2 = *b;

	*a = b2;
	*b = a2;
}

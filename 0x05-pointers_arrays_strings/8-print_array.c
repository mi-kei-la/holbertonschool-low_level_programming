#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print each number stored in an array
 *
 * @a: parameter (array)
 * @n: parameter (number of values)
 */

void print_array(int *a, int n)
{
	int x, len, *a2;

	a2 = a;
	while (*a2 != '\0')
	{
		len++;
		a2++;
	}
	x = 0;
	while (x < n)
	{
		printf("%d", *(a + x));
		x++;
		if (x != n)
			printf(", ");
		else
			printf("\n");
	}
}

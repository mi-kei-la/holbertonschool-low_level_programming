B#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of two diagonals
 *
 * @a: array
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;

	for (i = 0; i < size * size; i++)
	{
		diag1 = diag1 + *(a + i);
		i = i + size;
	}
	for (j = 0; j < size; j++)
	{
		diag2 = diag2 + *(a + ((size - 1) - j));
		a = a + size;
	}
	printf("%d, %d\n", diag1, diag2);
}

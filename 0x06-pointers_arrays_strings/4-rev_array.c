#include "holberton.h"

/**
 * reverse_array - reverse an array
 *
 * @a: parameter - array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i <= n; i++, n--)
	{
		n = n-1;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	n = _strlen_recursion("Hello");
	printf("%d\n", n);
	n = _strlen_recursion("");
	printf("%d\n", n);
	return (0);
}

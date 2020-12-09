#include <stdio.h>

/**
 * main - print single digit numbers using putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

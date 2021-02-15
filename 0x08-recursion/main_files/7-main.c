#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("holberton");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	r = is_palindrome("baeb");
	printf("%d\n", r);
	r = is_palindrome("barba");
	printf("%d\n", r);
	return (0);
}

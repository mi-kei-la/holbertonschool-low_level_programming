#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a = 'a';

	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("", 4, 0, -1024, 402);
	print_numbers(", a", 4, 0, 98, a, 402);
	print_numbers("xxx", 5, 0, 4, 98, -1024, 402);

	return (0);
}

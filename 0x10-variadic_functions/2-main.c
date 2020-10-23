#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(", ", 2, NULL, "Django");
	print_strings(", ", 1, "Jay", "Django");
	print_strings(", ", 3, "Jay", "Django", "hi");
        print_strings("", 3, "Jay", "Django", "hi");
	print_strings(", ", 0, "Jay", "Django");
	return (0);
}

#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world \"hello\"world\n";
	char *p;

	p = cap_string(s);
	printf("this is the return: %s", p);
	printf("this is the string: %s", s);
	return (0);
}

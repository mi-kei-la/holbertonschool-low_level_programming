#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter
 */

void rev_string(char *s)
{
	int start, end;
	char temp;

	for (end = 0; s[end] != '\0'; end++)
	{
	}

	end = end - 1;
	for (start = 0; start < end; start++)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		end--;
	}
}

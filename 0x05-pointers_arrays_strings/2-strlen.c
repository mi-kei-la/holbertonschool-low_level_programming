#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - return the length of a string
 *
 * @s: parameter
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int val;

	while (*s != '\0')
	{
		s++;
		val++;
	}
	return (val);
}

#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _isupper - check for uppercase characters
 *
 * @c: parameter to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isdigit - check for a digit
 *
 * @c: parameter to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _islower - check for lowercase
 *
 * @r: parameter
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int r)
{
	if (r >= 97 && r <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - entry point
 *
 * @c: parameter
 *
 * Return: 1 if char is letter (lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

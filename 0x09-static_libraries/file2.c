#include "holberton.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}

/**
 * _puts - print string, followed by new line
 *
 * @str: parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}


/**
 * _strlen - print length of string
 *
 * @s: string
 *
 * Return: count
 */

int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _abs - entry point
 *
 * write the absolut value of an integer
 *
 * @a: parameter
 *
 * Return: 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
		return (a);
	}
	else
	{
		return (a);
	}
	return (0);
}

/**
 * *_strcpy - copy a string into another
 *
 * @src: source parameter
 * @dest: parameter destination
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int count, x;

	for (count = 0; src[count] != '\0'; count++)
	{
	}

	for (x = 0; x <= count; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}

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
 * _strcat - concatenate two strings
 *
 * @src: parameter
 * @dest: parameter
 *
 * Return: pointer to dest
 */

	char *_strcat(char *dest, char *src)
	{
		int count;
		int temp;


		for (count = 0; dest[count] != '\0'; count++)
		{
		}

		for (temp = 0; src[temp] != '\0'; count++, temp++)
		{
			dest[count] = src[temp];
		}

		dest[count] = '\0';

		return (dest);
}

/**
 * _strncat - concatenate two strings
 * taking into account byte size
 *
 * @dest: parameter - first string
 * @src: parameter - second string
 * @n: parameter - bytes
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strncpy - copy a string into another
 * taking byte sizes into account
 *
 * @dest: parameter - destination
 * @src: parameter - string
 * @n: parameter - bytes
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i != n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - compare two strings
 *
 * @s1: parameter
 * @s2: parameter
 *
 * Return: difference of first unmatched char in ascii values
 */

int _strcmp(char *s1, char *s2)
{
	int x, ret;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			ret = s1[x] - s2[x];
			break;
		}
		else
			ret = 0;
	}
	return (ret);
}

/**
 * _memset - fill n bytes of memory with a constant byte
 *
 * @s: pointer to memory
 * @b: parameter
 * @n: size of bytes
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}

/**
 * _memcpy - copy n bytes from src to dest
 *
 * @dest: parameter
 * @src: parameter
 * @n: memory size
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);
}

/**
 * _strchr - find a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to first ocurrence of c, or null if not found
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (*s >= 0)
	{
		if (*s == c)
		{
			x = 1;
			break;
		}
		s++;
	}
	if (x != 0)
		return (s);
	else
		return (0);

}

/**
 * _strpbrk - search a string for any set of bytes
 *
 * @s: string
 * @accept: substring
 *
 * Return: pointer to first match
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	for ( ; *s != 0; s++)
	{
		for (x = 0; accept[x] != 0; x++)
		{
			if (*s == accept[x])
				return (s);
		}
	}
	return (0);
}

/**
 * _strstr - find a needle in a haystack
 *
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: pointer to match, or null if none
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, locate;

	for (j = 0; haystack[j] != 0; j++)
	{
		for (locate = j, i = 0; needle[i] != 0; i++, locate++)
		{
			if (needle[i] != haystack[locate] || haystack[locate] == 0)
				break;
		}
		if (needle[i] == 0)
			return (haystack + j);
	}
	return (0);
}

/**
 * _strspn - count bytes in the initial segment
 *
 * @s: string
 * @accept: init segment
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; accept[y] != 0; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (count == x)
			break;
	}

	return (count);
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
 * _atoi - convert string to integer
 *
 * @s: parameter
 *
 * Return: int
 */

int _atoi(char *s)
{
	_putchar(97);
	return(1);
}

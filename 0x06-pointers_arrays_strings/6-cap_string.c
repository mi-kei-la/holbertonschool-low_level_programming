#include "holberton.h"

/**
 * cap_string - capitalize each word
 *
 * @s: string parameter
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		if (s[x] == ' ' || s[x] == '\n' || s[x] == '\t' ||
s[x] == ',' || s[x] == ';' || s[x] == '.' || s[x] == '!' ||
s[x] == '?' || s[x] == '"' ||
s[x] == '(' || s[x] == ')' || s[x] == '{' || s[x] == '}')
		{
			if (s[x + 1] >= 97 && s[x + 1] <= 122)
				s[x + 1] = s[x + 1] - 32;
		}
	}
	return (s);
}

#include "holberton.h"

/**
 * rot13 - encript text
 *
 * @s: parameter
 *
 * Return: encripted string
 */

char *rot13(char *s)
{
	int x;
	int i;
	char let1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; let1[i] != '\0'; i++)
		{			
			if (s[x] == let1[i])
			{
				s[x] = let2[i];
				break;
			}
		}
	}
	return (s);
}

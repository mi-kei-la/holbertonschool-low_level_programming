#include "holberton.h"
/**
 * leet - change some letters for numbers
 *
 * @s - parameter
 *
 * Return: string
 */

char *leet(char *s)
{
	int x;
	int i;
	char let_m[5] = {'A', 'E', 'L', 'O', 'T'};
	char let[5] = {'a', 'e', 'l', 'o', 't'};
	char num[5] = {'4', '3', '1', '0', '7'};

	for (x = 0; s[x] != '\0'; x++)
	{
		i = 0;
		while (i < 5)
		{
			if ((s[x] == let_m[i]) || (s[x] == let[i]))
			{
				s[x] = num[i];
			}
			i++;
		}
	}

	return (s);
}

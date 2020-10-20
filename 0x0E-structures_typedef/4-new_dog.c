#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - array of chars
 * @str: string
 *
 * Return: always
 */

char *_strdup(char *str)
{
	char *s; /*pointer to copy of str*/
	int i; /*index of str*/
	int ii; /*index of copy of str*/

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii <= i; ii++)
	{
		s[ii] = str[ii];
	}
	return (s);
}

/**
 * new_dog - dog description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dogs description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cpy_name, *cpy_owner;

	if (name == NULL || owner == NULL)
	{
		return (0);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	cpy_name = _strdup(name);
	if (cpy_name == NULL)
	{
		free(dog);
		return (0);
	}
	cpy_owner = _strdup(owner);
	if (cpy_owner == NULL)
	{
		free(dog);
		free(cpy_name);
		return (NULL);
	}

	dog->name = cpy_name;
	dog->age = age;
	dog->owner = cpy_owner;
	return (dog);
}

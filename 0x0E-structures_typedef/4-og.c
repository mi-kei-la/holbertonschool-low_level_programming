#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (0);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(dog);
		return (0);
	}

	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(dog);
		free(new_name);
		return (NULL);
	}

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}


/**
* _strdup - copy string, return pointer to it
 *
 * @str: original string
 *
 * Return: pointer to duplicated string, NULL otherwise
 */

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
	}

	new = malloc((sizeof(char) * i) + 1);

	if (new == NULL)
		return (NULL);

	for (j = 0; j != i; j++)
		new[j] = str[j];

	return (new);
	free(new);
}

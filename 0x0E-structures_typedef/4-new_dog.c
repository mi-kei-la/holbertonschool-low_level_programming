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
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(struct dog));

	if (new == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(new);
		return (NULL);
	}

	new_owner = _strdup(owner);
	if (new_name == NULL)
	{
		free(new);
		free(new_name);
		return (0);
	}

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;


	return (new);
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

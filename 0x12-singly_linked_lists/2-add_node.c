#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node - add node at start of list
  *
  * @head: head of list
  * @str: value of node
  *
  * Return: pointer to new node, NULL otherwise
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int strlen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (strlen = 0; str[strlen] != '\0'; strlen++)
	{
	}

	new->str = strdup(str);
	new->len = strlen;
	new->next = *head;
	*head = new;

	return (new);
}

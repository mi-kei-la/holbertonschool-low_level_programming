#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - add new node at end of list
  *
  * @head: start of list
  * @str: string parameter
  *
  * Return: pointer to new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	int count;

	last = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	for (count = 0; str[count] != 0; count++)
	{
	}

	newNode->str = strdup(str);
	newNode->len = count;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;

	return (newNode);
}

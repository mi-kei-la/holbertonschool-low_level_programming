#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - count elements of the list
  *
  * @h: head
  *
  * Return: count, 0 otherwise
  */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	list_t *aux = malloc(sizeof(list_t));

	if (h == NULL || aux == NULL)
		return (0);

	aux->len = h->len;
	aux->str = h->str;
	aux->next = h->next;

	while (aux->next != NULL)
	{
		count += 2;
		aux = aux->next;
	}

	return (count);
}

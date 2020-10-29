#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - print all elements of linked list
  *
  * @h: pointer
  *
  * Return: count of nodes
  */

size_t print_list(const list_t *h)
{
	list_t *aux = malloc(sizeof(list_t));
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	aux->str = h->str;
	aux->len = h->len;
	aux->next = h->next;
	while (aux != NULL)
	{
		if (aux->str == NULL || aux->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", aux->len, aux->str);
		count++;
		aux = aux->next;
	}
	return (count);
}

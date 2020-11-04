#include "lists.h"

/**
  * free_listint2 - free list and point head to NULL
  *
  * @head: start of list
  */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	if (!*head)
	{
		*head = NULL;
		return;
	}
	while (*head)
	{
		aux = (**head).next;
		free(*head);
		*head = aux;
	}
}

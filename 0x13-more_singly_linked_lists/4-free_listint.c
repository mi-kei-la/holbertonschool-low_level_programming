#include "lists.h"

/**
  * free_listint - free memory
  *
  * @head: start of list
  */

void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

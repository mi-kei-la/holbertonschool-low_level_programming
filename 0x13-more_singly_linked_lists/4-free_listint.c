#include "lists.h"

/**
  * free_listint - free memory
  *
  * @head: start of list
  */

void free_listint(listint_t *head)
{
	listint_t *aux = NULL;

	if (head == NULL)
	{
		free(head);
		free(aux);
		return;
	}

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

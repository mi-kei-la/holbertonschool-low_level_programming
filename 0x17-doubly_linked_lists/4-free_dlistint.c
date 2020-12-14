#include "lists.h"

/**
* free_dlistint - free doubly linked list
*
* @head: pointer to beginning of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

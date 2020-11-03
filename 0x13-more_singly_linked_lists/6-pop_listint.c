#include "lists.h"

/**
  * pop_listint - delete head node
  *
  * @head: parameter
  * Return: data of head node
  */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int x = 0;

	if (*head == NULL)
		return (0);
	aux = (**head).next;
	x = (**head).n;
	free(*head);
	*head = aux;
	return (x);
}

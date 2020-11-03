#include "lists.h"

/**
  * add_nodeint_end - add node at end of list
  *
  * @head: start of list
  * @n: value
  * Return: pointer to new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *aux = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	return (new);
}

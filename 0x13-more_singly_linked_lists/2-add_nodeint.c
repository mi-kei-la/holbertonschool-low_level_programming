#include "lists.h"

/**
  * add_nodeint - add node at start of list
  *
  * @head: start of list
  * @n: value of new node
  * Return: pointer to new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

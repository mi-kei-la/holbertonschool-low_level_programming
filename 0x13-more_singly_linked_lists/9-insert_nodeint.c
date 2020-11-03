#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at location
  *
  * @head: start of list
  * @idx: location to insert node
  * @n: node's data
  *
  * Return: pointer to new node, NULL otherwise
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *tmp, *aux;

	new = malloc(sizeof(listint_t));
	tmp = malloc(sizeof(listint_t));

	if (new == NULL || tmp == NULL)
		return (NULL);

	tmp = *head;

	while (count < (idx - 1))
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (NULL);

	new->n = n;
	aux = tmp->next;

	new->next = aux;
	tmp->next = new;
	return (new);
}

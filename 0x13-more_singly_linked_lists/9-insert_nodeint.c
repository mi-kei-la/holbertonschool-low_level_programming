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
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL || *head == NULL)
		return (NULL);

	tmp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	while (count != (idx - 1))
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}

	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

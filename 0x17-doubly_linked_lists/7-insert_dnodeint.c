#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at given point in list
*
* @h: head
* @idx: index of new node
* @n: data of new node
*
* Return: address of new node, NULL otherwise
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = NULL;
	size_t len = dlistint_len(*h);
	unsigned int i;

	if (idx > len)
		return (NULL);
	else if (idx == 0 || *h == NULL)
		new = add_dnodeint(h, n);
	else if (idx == len)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		for (i = 0; i <= idx && tmp->next != NULL; i++)
			tmp = tmp->next;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
	}
	return (new);
}

/**
* dlistint_len - return number of elements in a linked list
*
* @h: head
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	if (h->prev != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}


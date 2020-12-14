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
	dlistint_t *new = NULL, *tmp = *h;
	size_t size = 0;

	if (h == NULL) /* check is pointer exists */
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0) /* add at start of list */
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (*h == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	if (tmp->prev != NULL) /* check is h pointer is address of head */
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	}
	size = dlistint_len(tmp); /* check for index existance */
	if (size < idx)
		return (NULL);
	if (size == idx)
		new = add_dnodeint_end(h, n);
	else
	{
		for (; idx && tmp->next != NULL; idx--) /* move tmp */
			tmp = tmp->next;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev = new;
		if (tmp->prev != NULL)
			tmp->prev->next = new;

		new->n = n;
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

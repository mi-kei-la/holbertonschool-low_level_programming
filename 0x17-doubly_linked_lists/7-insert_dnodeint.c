#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at given point in list
*
* @h: head
* @idx: index of new node
* @n: data of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	if (*h == NULL) /* check if list is empty ¨*/
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	if (idx == 0) /* add at start of list */
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	tmp = *h;
	if (tmp->prev != NULL) /* check if h is not start */
	{
		while (tmp->prev != NULL)
		{
			tmp = tmp->prev;
		}
	}
	while (count < idx)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	tmp = tmp->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;
	new->n = n;
	return (new);
}

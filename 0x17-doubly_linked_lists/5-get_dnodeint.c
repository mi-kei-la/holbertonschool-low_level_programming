#include "lists.h"

/**
* get_dnodeint_at_index - return nth node
*
* @head: beginning of list
* @index: number of node to return
*
* Return: pointer to node, NULL otherwise
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;

	if (!head)
		return (0);

	h = head;

	while (index)
	{
		if (!h->next)
			return (NULL);
		h = h->next;
		index--;
	}

	return (h);
}

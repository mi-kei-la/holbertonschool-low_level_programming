#include "lists.h"

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

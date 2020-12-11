#include "lists.h"

/**
  * print_dlistint - print all elements of a double linked list
  *
  * @h: head
  *
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL) /* check if pointer exists */
		return (0);

	if (h->prev != NULL) /* check if h is the beginning of list */
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	while (h) /* print elements and count nodes */
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

#include "lists.h"

/**
  * print_listint - print all nodes in a list
  * @h: head
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

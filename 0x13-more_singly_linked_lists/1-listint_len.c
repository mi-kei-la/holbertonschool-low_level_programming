#include "lists.h"

/**
  * listint_len - count nodes in a list
  *
  * @h: head
  * Return: count
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

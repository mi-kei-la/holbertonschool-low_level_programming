#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - count elements of the list
  *
  * @h: head
  *
  * Return: count, 0 otherwise
  */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

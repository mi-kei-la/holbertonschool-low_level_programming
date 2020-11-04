#include "lists.h"

/**
  * get_nodeint_at_index - return n node
  *
  * @head: start of list
  * @index: n
  * Return: data
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count <= index)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}

#include "lists.h"

/**
  * delete_dnodeint - delete node at given position
  *
  * @head: beginning of list
  * @index: index of node to delete
  *
  * Return: 1 if success, -1 otherwise
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	dlistint_t *tmp = *head, *sec = NULL;

	if (index > len || head == NULL || *head == NULL)
		return (-1);

	if ((*head)->next == NULL && (*head)->prev == NULL) /* last node */
	{
		*head = NULL;
		free(*head);
		return (1);
	}
	
	if (index == 0)
	{
		tmp->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (index && tmp != NULL) /* move tmp */
	{
		tmp = tmp->next;
		index--;
	}

	if (index == len)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	sec = tmp;
	if (tmp->next != NULL && tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	else
		tmp->prev->next = NULL;
	if (tmp->prev != NULL && tmp->next != NULL)
		tmp->next->prev = sec->prev;
	else
		tmp->next->prev = NULL;
	free(tmp);

	return(1);
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

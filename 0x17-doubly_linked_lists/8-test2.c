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
	unsigned int count = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL) /* check if head ptr is null */
		return (-1);

	tmp = *head;

	if (tmp->prev != NULL) /* check if head points to start of list */
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	}

	if (index == 0) /* delete first node */
	{
		tmp->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	if (tmp->next == NULL && tmp->prev == NULL) /* last node */
	{
		free(tmp);
		return (1);
	}

	while (count != index) /* go up to n node */
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		count++;
	}

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	else
		tmp->prev->next = NULL;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	else
		tmp->next->prev = NULL;
	free(tmp);
	return (1);
}
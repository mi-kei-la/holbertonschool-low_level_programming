#include "lists.h"

/**
  * delete_nodeint_at_index - delete node
  *
  * @head: start of list
  * @index: parameter
  *
  * Return: 1 if success, -1 if fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *aux, *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (count != index - 1)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
			return (-1);
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	aux = temp->next->next;
	free(temp->next);
	temp->next = aux;
	return (1);
}

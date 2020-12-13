#include "lists.h"

/**
* add_dnodeint - add node at the beginning of a list
*
* @head: pointer to beginning of a list
* @n: data to insert
*
* Return: address of new element, NULL otherwise
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
		new->next = NULL;
	else if ((*head)->prev != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	}
	new->next = *head;
	*head = new;

	return (new);
}

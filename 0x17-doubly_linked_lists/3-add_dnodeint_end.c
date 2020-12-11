#include "lists.h"

/**
* add_dnodeint_end - add node at end of list
*
* @head: beginning of list
* @n: data
*
* Return: address of new node, NULL otherwise
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n; /* assign values to new node */
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}

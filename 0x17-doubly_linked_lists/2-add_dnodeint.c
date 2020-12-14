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

	if (head == NULL) /* check if list exists */
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL) /* check for if allocation fails */
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL) /*check is list has content */
		(*head)->prev = new;
	*head = new;

	return (new);
}

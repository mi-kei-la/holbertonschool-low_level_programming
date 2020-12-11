#include "lists.h"

/**
* get_dnodeint_at_index - return nth node
*
* @head: beginning of list
* @index: number of node to return
*
* Return: pointer to node, NULL otherwise
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head->prev != NULL) /* check if head ptr is not head */
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while (count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}

	return (head);
}

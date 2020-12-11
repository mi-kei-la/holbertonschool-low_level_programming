#include "lists.h"

/**
* sum_dlistint - sum all data of a list
*
* @head: pointer to beginning of list
*
* Return: sum of values, 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		if (head->prev != NULL)
		{
			while (head->prev != NULL)
				head = head->prev;
		}
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}

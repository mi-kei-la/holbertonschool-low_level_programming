#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_list - free memory
  *
  * @head: start of list
  */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head->next);
		head = tmp;
	}
	free(head);
}

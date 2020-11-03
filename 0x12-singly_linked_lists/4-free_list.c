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

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}

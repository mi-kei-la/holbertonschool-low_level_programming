#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("--------idx 5---------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----idx 40------------\n");
	delete_dnodeint_at_index(&head, 40);
	print_dlistint(head);
	printf("---------idx 10--------\n");
	delete_dnodeint_at_index(&head, 10);
	print_dlistint(head);
	printf("--------idx 3---------\n");
	delete_dnodeint_at_index(&head, 3);
	print_dlistint(head);
	printf("--------idx 0---------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------idx 0------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----idx 0------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("------idx 8-----------\n");
	delete_dnodeint_at_index(&head, 8);
	print_dlistint(head);
	printf("---------idx 0--------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("--------idx 0---------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-------idx 0----------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);

	return (0);
}

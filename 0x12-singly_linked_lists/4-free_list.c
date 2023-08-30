#include "lists.h"

/**
 * free_list - Free a list_t list
 * @head: A pointer to the linked list to be freed
 * Return: void
 **/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;

		free(head->str);
		free(head);
		head = tmp;
	}
}

#include "lists.h"

/**
 * free_listint2 - Free a listint_t list
 * @head: A pointer to a pointer to the head of the listint_t list
 * Return: void
 **/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

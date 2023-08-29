#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of listint_t linked list
 * Return: The head node’s data (n), or 0 if the list is empty
 **/

int pop_listint(listint_t **head)
{
	int ret;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = (*head)->next;
	ret = (*head)->n;
	free(*head);
	*head = tmp;

	return (ret);
}

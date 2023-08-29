#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: A pointer to a pointer to the head of the linked list
 * Return: A pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	else
	{
		node = *head;
		tmp = (*head)->next;
	}

	while (node->next)
	{
		node->next = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = node->next;
	}

	return (*head);
}

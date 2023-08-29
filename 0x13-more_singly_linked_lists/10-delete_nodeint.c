#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at the given index
 * @head: A pointer to a pointer to the head of the linked list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy = *head, *tmp;
	unsigned int node;

	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < index - 1; node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);

	return (1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - Add a new node at the given index
 * @head: A pointer to a pointer to the head of the linked list
 * @idx: The index of the list where the new node should be added
 * @n: The integer to put inside the new node
 * Return: The address of the new element, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (node = 0; node < idx - 1; node++)
	{
		if (copy == NULL || copy->next == NULL)
		{
			free(new);
			return (NULL);
		}

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}

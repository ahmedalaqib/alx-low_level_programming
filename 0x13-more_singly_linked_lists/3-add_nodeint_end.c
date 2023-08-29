#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer to put inside the new node
 * Return: The address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head  == NULL)
	{
		*head = new;
		return (new);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = new;

	return (new);
}

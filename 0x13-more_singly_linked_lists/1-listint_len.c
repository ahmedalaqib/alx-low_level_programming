#include "lists.h"

/**
 * listint_len - Return the number of elemnts in listint_t list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 **/
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

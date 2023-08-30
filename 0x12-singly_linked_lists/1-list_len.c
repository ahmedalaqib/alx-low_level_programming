#include "lists.h"

/**
 * list_len - Calculates the number of nodes in a linked list
 * @h: A pointer to the first node in the linked list
 * Return: The number of nodes
 **/

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

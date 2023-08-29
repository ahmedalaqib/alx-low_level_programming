#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node to retrieve
 * Return: The nth node of a listint_t linked list,
 *	 or NULL if the node does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		index--;
		head = head->next;
	}

	return (head);
}

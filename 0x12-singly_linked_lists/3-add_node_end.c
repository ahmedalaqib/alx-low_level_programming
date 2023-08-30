#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @str: The string to put inside the node
 * Return: A pointer to the new node in the linked list
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = *head;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!(new->str))
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = new;

	return (new);
}

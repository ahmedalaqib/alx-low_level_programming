#include "lists.h"

/**
 * add_node - Add a new node at the biginning of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @str: The string to put inside the node
 * Return: A pointer to the head of the linked list
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}

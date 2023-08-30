#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/

int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 **/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/**
 * print_list - Print the data stored in the nodes of a linked list
 * @h: A pointer to the first node in the linked list
 * Return: The number of nodes
 **/

size_t print_list(const list_t *h);

/**
 * list_len - Calculates the number of nodes in a linked list
 * @h: A pointer to the first node in the linked list
 * Return: The number of nodes
 **/

size_t list_len(const list_t *h);

/**
 * add_node - Add a new node at the biginning of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @str: The string to put inside the node
 * Return: A pointer to the head of the linked list
 **/

list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Add a new node at the end of a linked list
 * @head: A pointer to a pointer to the first node in the linked list
 * @str: The string to put inside the node
 * Return: A pointer to the new node in the linked list
 **/

list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Free a list_t list
 * @head: A pointer to the linked list to be freed
 * Return: void
 **/

void free_list(list_t *head);

#endif

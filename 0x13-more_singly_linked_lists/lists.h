#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 **/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Print all the elemnts of listint_t list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 **/

size_t print_listint(const listint_t *h);

/**
 * listint_len - Return the number of elemnts in listint_t list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 **/

size_t listint_len(const listint_t *h);

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer to put inside the new node
 * Return: The address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer to put inside the new node
 * Return: The address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Free a listint_t list
 * @head: A pointer to the head of the listint_t list
 * Return: void
 **/

void free_listint(listint_t *head);

/**
 * free_listint2 - Free a listint_t list
 * @head: A pointer to a pointer to the head of the listint_t list
 *
 * Return: void
 **/

void free_listint2(listint_t **head);

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of listint_t linked list
 * Return: The head node’s data (n), or 0 if the list is empty
 **/

int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node to retrieve
 * Return: The nth node of a listint_t linked list,
 *	 or NULL if the node does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - Calculate the sum of all the data(n) of a listint_t list
 * @head: A pointer to the head of the linked list
 * Return: The sum, or 0 if the list is empty
 **/

int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - Add a new node at the given index
 * @head: A pointer to a pointer to the head of the linked list
 * @idx: The index of the list where the new node should be added
 * @n: The integer to put inside the new node
 * Return: The address of the new element, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - Delete a node at the given index
 * @head: A pointer to a pointer to the head of the linked list
 * @index: The index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index);

/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: A pointer to a pointer to the head of the linked list
 * Return: A pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head);

/**
 * print_listint_safe - Print all the elemnts of listint_t list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 *	 If the function fails, exit the program with status 98
 **/

size_t print_listint_safe(const listint_t *h);

/**
 * free_listint_safe - Prints a linked list
 * @h: Pointer to address of a list
 * Return: Size of the list that was free'd
 **/

size_t free_listint_safe(listint_t **h);

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to a struct
 *
 * Return: Address of the node where loop starts
 *	 NULL if there is no loop
 **/

listint_t *find_listint_loop(listint_t *head);

#endif

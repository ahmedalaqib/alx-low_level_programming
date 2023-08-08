#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes
 *       it with a specific char
 * @size: Size of the array
 * @c: The char to initialize with
 * Return: NULL if it fails, pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 *	 in memory, which contains a copy of the string
 *	 given as a parameter
 * @str: String to copy
 * Return: Pointer to the allocated memory, or null if failed
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	int size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		size++;

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ptr[j] = str[j];

	ptr[j] = '\0';

	return (ptr);
}

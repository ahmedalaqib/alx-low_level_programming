#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the allocated string, NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size1 = 0;
	int size2 = 0;
	char *ptr;

	while (s1[i++])
		size1++;
	while (s2[j++])
		size2++;

	ptr = malloc(sizeof(char) * (size1 + size2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < size2; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}

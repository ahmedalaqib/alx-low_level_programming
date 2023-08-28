#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array , using malloc
 *	 and initialize it with zeros
 * @nmemb: The number of elements of "size" bytes
 * @size: The size of a single element in bytes
 *
 * Return: A pointer to the allocated memory,
 *	 if nmemb or size is 0, then _calloc returns NULL,
 *	 If malloc fails, then _calloc returns NULL
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if ((nmemb * size) == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(arr + i) = 0;

	return (arr);
}

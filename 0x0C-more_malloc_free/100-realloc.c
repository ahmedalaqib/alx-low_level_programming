#include <stdlib.h>
/**
 * _realloc - Reallocate memory block using malloc and free
 *	 and copy the content of ptr to the newly allocated space,
 *	 in the range from the start of ptr up to
 *	 the minimum of the old and new sizes.
 *	 If new_size > old_size, the "added" memory
 *	 should not be initialized
 * @ptr: A pointer to the memory previously allocated with a call to malloc:
 *	 "malloc(old_size)"
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The size, in bytes, of the new memory block
 *
 * Return: A pointer to the allocated memory,
 *	 if new_size == old_size,do not do anything and return ptr
 *	 If new_size is equal to zero, and ptr is not NULL,
 *	 then the call is equivalent to free(ptr). Return NULL
 *	 If malloc fails, then _realloc returns NULL
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;
	unsigned int copy_size = old_size;

	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size < old_size)
	{
		copy_size = new_size;
	}

	arr = malloc(new_size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < copy_size; i++)
		*(arr + i) = *((char *)ptr + i);

	free(ptr);

	return (arr);
}

#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory,
 *	   if malloc fails, the function should cause normal process
 *	   termination with a status value of 98
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Concatenate two strings given as a parameter into
 *		    a newly allocated memory space taking n characters
 *		    from the second string
 * @s1: The string to be put first in the new string
 * @s2: The string to be put second in the new string
 * @n: The number of characters to be taken
 *     from the second string, if n is greater than
 *     or equal the length of s2 then use the entire string s2
 *
 * Return: A pointer to the concatenated string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Allocate memory for an array , using malloc
 *	     and initialize it with zeros
 * @nmemb: The number of elements of "size" bytes
 * @size: The size of a single element in bytes
 *
 * Return: A pointer to the allocated memory,
 *	   if nmemb or size is 0, then _calloc returns NULL,
 *	   If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Allocate memory for an array of integers,
 *		 using malloc that contain all the values
 *		 from min (included) to max (included),
 *		 ordered from min to max
 *	     and initialize it with zeros
 * @min: The first number to be initialized in the array
 * @max: The last number to be initialized in the array
 *
 * Return: A pointer to the array,
 *	   if min > max, or if malloc fails return NULL,
 */
int *array_range(int min, int max);

/**
 * _realloc - Reallocate memory block using malloc and free
 *	      and copy the content of ptr to the newly allocated space,
 *	      in the range from the start of ptr up to
 *	      the minimum of the old and new sizes.
 *	      If new_size > old_size, the "added" memory
 *	      should not be initialized
 * @ptr: A pointer to the memory previously allocated with a call to malloc:
 *	 "malloc(old_size)"
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The size, in bytes, of the new memory block
 *
 * Return: A pointer to the allocated memory,
 *	   if new_size == old_size,do not do anything and return ptr
 *	   If new_size is equal to zero, and ptr is not NULL,
 *	   then the call is equivalent to free(ptr). Return NULL
 *	   If malloc fails, then _realloc returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif

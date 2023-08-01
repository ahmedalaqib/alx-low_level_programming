#include <stdio.h>

/**
 * _memset - Fills memmory with a constant byte
 * @s: pointer to an area
 * @b: byte to be filled with
 * @n: number of bytes
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

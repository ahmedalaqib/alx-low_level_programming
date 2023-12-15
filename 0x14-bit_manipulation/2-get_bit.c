#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to get the indexed bit from
 * @index: The index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int size = (8 * sizeof(unsigned long int)) - 1;

	if (index > size)
		return (-1);

	if (n & (i << index))
		return (1);

	return (0);
}

#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: The number to return the value of its bit at a given index
 * @index: The index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int max_shifts = (8 * sizeof(unsigned long int)) - 1;

	if (index > max_shifts)
		return (-1);

	if (n & (i << index))
		return (1);

	return (0);
}

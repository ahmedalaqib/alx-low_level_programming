#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0
 * @n: The number to clear the value of its bit at a given index
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int max_shifts = (8 * sizeof(unsigned long int)) - 1;

	if (index > max_shifts)
		return (-1);

	*n &= ~(i << index);

	return (1);
}

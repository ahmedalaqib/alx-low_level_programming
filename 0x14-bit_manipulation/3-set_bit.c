#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number to set the bit
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int max_size = (8 * sizeof(unsigned long int)) - 1;

	if (index > max_size)
		return (-1);

	*n = *n | (i << index);

	return (1);
}

#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 *	 to flip to get from one number to another
 * @n: The number to get from
 * @m: The number to get to
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flipped_bits = 0;

	if (n == 0)
		return (0);

	while (xor > 0)
	{
		flipped_bits += (xor & 1);
		xor = xor >> 1;
	}

	return (flipped_bits);
}

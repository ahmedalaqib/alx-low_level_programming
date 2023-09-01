#include "main.h"

/**
 * flip_bits - Count the number of diffrentbits between two numbers
 * @n: The first number
 * @m: The second number
 * Return: The number of bits you would need to
 *	 flip to get from one number to another
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int dif_bits = 0;

	if (n == 0)
		return (0);

	while (xor > 0)
	{
		dif_bits += (xor & 1);
		xor >>= 1;
	}

	return (dif_bits);
}

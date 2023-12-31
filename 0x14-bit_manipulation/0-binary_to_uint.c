#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to the binary number to be converted
 * Return: The converted number, or 0 if
 *		 there is one or more chars in the string b that is not 0 or 1
 *		 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, r = 0;

	for (i = 0; b && b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		r = (r * 2) + (b[i] & 1);
	}

	return (r);
}

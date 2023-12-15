#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int start = 0;
	char left_shifts = (8 * sizeof(unsigned long int)) - 1;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0')
		return;
	}

	for (i = i << left_shifts; i > 0; i = i >> 1)
	{
		if (n & i)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
			_putchar('0');
	}
}

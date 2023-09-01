#include "main.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to print its binary representation
 * Return: Void
 **/

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	char start_flag = 0;
	char l_shifts = (8 * sizeof(unsigned long int)) - 1;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	for (i = i << l_shifts; i > 0; i >>= 1)
	{
		if (n & i)
		{
			start_flag = 1;
			_putchar('1');
		}
		else if (start_flag)
			_putchar('0');
										
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times followed
 *	 by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 * Return: Always void
 */
void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (length != n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}

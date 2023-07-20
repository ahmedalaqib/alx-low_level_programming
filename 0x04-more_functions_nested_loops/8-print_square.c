#include "main.h"
/**
 * print_square - Draw a square in the terminal
 * @size: The size of the square
 * Return: Always void
 */
void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			if (length != size - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}

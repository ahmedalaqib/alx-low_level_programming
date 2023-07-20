#include "main.h"
/**
 * print_triangle - Draw a triangle in the terminal
 * @size: The size of the triangle
 * Return: Always void
 */
void print_triangle(int size)
{
	int length, space, hashtag;

	if (size > 0)
	{
		for (length = 1; length <= size; length++)
		{
			for (space = 0; space < size - length; space++)
			{
				_putchar(' ');
			}

			for (hashtag = 0; hashtag < length; hashtag++)
			{
				_putchar('#');
			}

			if (length != size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}

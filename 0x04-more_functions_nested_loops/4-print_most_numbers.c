#include "main.h"
/**
 * print_most_numbers - Print the numbers, from 0 to 9,
 *			but not 2 or 4
 *			followed by a new line
 * Return: Always void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

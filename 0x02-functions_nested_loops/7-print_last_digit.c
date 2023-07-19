#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to be passed 
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m *= -1;
	_putchar(m + '0');

	return (m);
}

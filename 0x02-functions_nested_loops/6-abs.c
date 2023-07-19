#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: Number to be computed
 * Return: Computed value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (-n);
}

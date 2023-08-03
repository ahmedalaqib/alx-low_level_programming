#include "main.h"

/**
 * factorial - returns factorial of n using recursion
 *
 * @n: int paramater to return factorial of
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

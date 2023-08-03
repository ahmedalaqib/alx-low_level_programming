#include "main.h"

/**
 * _pow_recursion - returns val of x^^y
 *
 * @x: value to raise to power of y
 * @y: power to exponent x
 *
 * Return: int of x^^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}

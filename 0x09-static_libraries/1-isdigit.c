#include "main.h"
/**
 * _isdigit - Check for a digit.
 * @c: The character to check
 * Return: 1 if c is digit 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

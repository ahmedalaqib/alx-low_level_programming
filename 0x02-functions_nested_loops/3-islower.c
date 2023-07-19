#include <stdio.h>

/**
 * _islower - checks if a given character is lowercase
 * Return: 1 if lowercase, 1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

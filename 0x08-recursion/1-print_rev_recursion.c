#include "main.h"

/**
 * _print_rev_recursion - puts a string to stdout in reverse
 *
 * @s: string to put to stdout
 *
 * Return: always void
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

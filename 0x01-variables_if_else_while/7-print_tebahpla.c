#include <stdio.h>

/**
 * main - Prints alphabet in lowercase in reverse
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}

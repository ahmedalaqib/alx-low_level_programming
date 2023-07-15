#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and then in
 *	 uppercase followed by a new line
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return(0);
}

#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except q
 *	 and e followed by a new line
 * Return: 0
 */

int main(void)
{       
        char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');

	return (0);
}

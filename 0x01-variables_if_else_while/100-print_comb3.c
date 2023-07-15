#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	return (0);
}

#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (p = m + 1; p <= 9; p++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(p + '0');
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

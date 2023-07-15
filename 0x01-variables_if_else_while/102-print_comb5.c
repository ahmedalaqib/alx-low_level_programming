#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int n;
	int m;
	int p;
	int q;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (p = 0; p <= 9; p++)
			{
				for (q = 0; q <= 9; q++)
				{
					if ((n < p) || (n == p && m < q))
					{
						putchar(n + '0');
						putchar(m + '0');
						putchar(' ');
						putchar(p + '0');
						putchar(q + '0');
					if (!(n == 9 && m == 8))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

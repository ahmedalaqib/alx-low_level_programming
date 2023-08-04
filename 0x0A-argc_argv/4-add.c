#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 * Return: 0 if not error, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);

		if (!j)
		{
			printf("Error\n");
			return (1);
		}

		sum += j;
	}
	printf("%d\n", sum);

	return (0);
}

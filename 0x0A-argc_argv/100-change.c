#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make
 *	 change for an amount of money
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money;
	int coins = 0;
	int i;
	int array[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (money >= array[i])
		{
			money -= array[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}

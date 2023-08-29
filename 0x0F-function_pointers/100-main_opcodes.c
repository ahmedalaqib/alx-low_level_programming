#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of the main function
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
	char *op_code = (char *)main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02hhx ", op_code[i]);
	}

	printf("%02hhx\n", op_code[i]);

	return (0);
}

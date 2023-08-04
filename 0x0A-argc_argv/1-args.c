#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}

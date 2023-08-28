#include <stdio.h>

/**
 * main - Print the name of the file it was compiled from,
 *	 followed by a new line
 *
 * Return: Always 0 (succes)
 **/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

#include <stdio.h>
/**
 * main - print the numbers from 1 to 100. But:
 *	  For multiples of 3 print Fizz instead
 *	  For multiples of 5 print Buzz instead
 *	  For multiples of both print FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", count);
		}
		if (count != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

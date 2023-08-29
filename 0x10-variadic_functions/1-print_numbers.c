#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print all of passed numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (separator && (i != n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(p);
}

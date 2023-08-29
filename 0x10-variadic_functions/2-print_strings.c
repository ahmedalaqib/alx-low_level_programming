#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print all of passed strings
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char *str;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && (i != n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(p);
}

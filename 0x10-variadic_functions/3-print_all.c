#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Print any passed character
 * @args: A list of arguments pointing to character to be printed
 * Return: void
 **/

void print_char(va_list args)
{
	char ch = va_arg(args, int);

	printf("%c", ch);
}

/**
 * print_int - Print any passed integer
 * @args: A list of arguments pointing to integer to be printed
 * Return: void
 **/

void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
 * print_float - Print any passed float
 * @args: A list of arguments pointing to float to be printed
 * Return: void
 **/

void print_float(va_list args)
{
	float num = va_arg(args, double);

	printf("%f", num);
}

/**
 * print_string - Print any passed string or "(nil)" if NULL is passed
 * @args: A list of arguments pointing to string to be printed
 * Return: void
 **/

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Print any argument passed
 * @format: A list of types of arguments passed to the function:
 *		 c: char
 *		 i: integer
 *		 f: float
 *		 s: char *
 *		 any other char should be ignored
 * Return: void
 **/

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j;
	va_list args;

	printer_t printer_funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && *(format + i))
	{
		j = 0;

		while (j < 4 && *(format + i) != *(printer_funcs[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			printer_funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

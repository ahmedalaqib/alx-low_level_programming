#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * _isupper - Check for uppercase character.
 * @c: The character to check
 * Return: 1 if c is uppercase 0 otherwise.
 */
int _isupper(int c);

/**
 * _isdigit - Check for a digit.
 * @c: The character to check
 * Return: 1 if c is digit 0 otherwise.
 */
int _isdigit(int c);

/**
 * mul - Multiply two integers
 * @a: The number to multiply another number with
 * @b: The number multiplied by the first number
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b);

/**
 * print_numbers - Print the numbers, from 0 to 9, followed by a new line
 * Return: Always void.
 */
void print_numbers(void);

/**
 * print_most_numbers - Print the numbers, from 0 to 9,
 *                      but not 2 or 4
 *                      followed by a new line
 * Return: Always void.
 */
void print_most_numbers(void);

/**
 * more_numbers - Print 10 times the numbers,
 *		  from 0 to 14, followed by a new line
 * Return: Always void.
 */
void more_numbers(void);

/**
 * print_line - Draw a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * Return: Always void
 */
void print_line(int n);

/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 * Return: Always void
 */
void print_diagonal(int n);

/**
 * print_square - Draw a square in the terminal
 * @size: The size of the square
 * Return: Always void
 */
void print_square(int size);

/**
 * print_triangle - Draw a triangle in the terminal
 * @size: The size of the triangle
 * Return: Always void
 */
void print_triangle(int size);
void print_number(int n);
#endif

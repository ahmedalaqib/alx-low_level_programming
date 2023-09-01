#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 *	 On error, -1 is returned, and errno is set appropriately.
 **/

int _putchar(char c);

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars that should be converted
 * Return: The converted number, or 0 if:
 *	 there is one or more chars in the string b that is not 0 or 1
 *	 b is NULL
 **/

unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to print its binary representation
 * Return: Void
 **/

void print_binary(unsigned long int n);

/**
 * git_bit - Return the value of a bit at a given index
 * @n: The number to return the value of its bit at a given index
 * @index: The index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Set the value of a bit at a given index to 1
 * @n: The number to set the value of its bit at a given index
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 **/

int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Set the value of a bit at a given index to 0
 * @n: The number to clear the value of its bit at a given index
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 **/

int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Count the number of diffrentbits between two numbers
 * @n: The first number
 * @m: The second number
 * Return: The number of bits you would need to
 *	 flip to get from one number to another
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - Check the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 **/

int get_endianness(void);

#endif

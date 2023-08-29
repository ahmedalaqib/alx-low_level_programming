#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 **/

typedef struct op
{
		char *op;
			int (*f)(int a, int b);
} op_t;

/**
 * op_add - Add two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The addition result
 **/

int op_add(int a, int b);

/**
 * op_add - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The subtraction result
 **/

int op_sub(int a, int b);

/**
 * op_mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The multiplication result
 **/

int op_mul(int a, int b);

/**
 * op_div - Divide two integers using integer division
 * @a: The first integer
 * @b: The second integer
 * Return: The integer division result
 **/

int op_div(int a, int b);

/**
 * op_mod - Calculate the division reminder of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The reminder
 **/

int op_mod(int a, int b);

int (*get_op_func(char *s))(int a, int b);

#endif

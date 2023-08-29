#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H


/**
 * print_name - Print the given name as specified
 *		 by the function "f"
 * @name: The name to print
 * @f: A pointer to the function that specifies how to print the name
 * Return: void
 **/

void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Execute a function given as a parameter
 *		 on each element of an array
 * @array: The array to iterate the execution
 *	 on each of its elements
 * @size: The size of the array
 * @action: A pointer to the function that should
 *	 be executed on the array's elements
 * Return: void
 **/

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Search for an integer inside an array
 * @array: The array to be searched
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: The index of the first element
 *	 for which the cmp function does not return 0
 *	 If no element matches or size <= 0, return -1
 **/

int int_index(int *array, int size, int (*cmp)(int));

#endif

#include <stddef.h>

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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((!action) || (!array))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

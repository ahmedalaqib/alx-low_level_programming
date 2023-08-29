/**
 * int_index - Search for an integer inside an array
 * @array: The array to be searched
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: The index of the first element
 *	 for which the cmp function does not return 0
 *	 If no element matches or size <= 0, return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((size <= 0) || (!array) || (!cmp))
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(*(array + index)))
			return (index);
	}

	return (-1);
}

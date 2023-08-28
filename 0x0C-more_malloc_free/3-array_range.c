#include <stdlib.h>
/**
 * array_range - Allocate memory for an array of integers,
 *		 using malloc that contain all the values
 *		 from min (included) to max (included),
 *		 ordered from min to max
 *		 and initialize it with zeros
 * @min: The first number to be initialized in the array
 * @max: The last number to be initialized in the array
 *
 * Return: A pointer to the array,
 *	 if min > max, or if malloc fails return NULL,
 **/
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int range = max - min;

	if (range < 0)
		return (NULL);


	arr = malloc((range + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= range; i++)
		*(arr + i) = min + i;

	return (arr);
}

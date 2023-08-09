#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional
 *	 array of integers
 * @width: Columns of the array
 * @height: Rows of the array
 * Return: Pointer to the array, NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		
		if (ptr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}

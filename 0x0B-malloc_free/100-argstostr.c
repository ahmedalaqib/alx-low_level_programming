#include <stdlib.h>
/**
 * argstostr - Concatenate all the arguments of the program into
 *		  a newly allocated memory space
 * @ac: The number of arguments passed
 * @av: An array of pointers
 * Return: A pointer to the concatenated string, NULL otherwise
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	char *cat_str;
	int size = 0;

	if (ac == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}

	cat_str = malloc((size + 1) * sizeof(char));

	if (cat_str == 0)
		return (cat_str);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*(cat_str + size++) = av[i][j];
		}
		*(cat_str + size++) = '\n';

	*(cat_str + size) = '\0';
	}

	return (cat_str);
}

#include <stdlib.h>

/**
 * _strlen - Calculate the length of the string
 * @str: The string to calculate its length
 *
 * Return: The length of the string,
 *	 if NULL or empty string is passed return 0
 **/
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str && *str++)
		len++;

	return (len);
}

/**
 * string_nconcat - Concatenate two strings given as a parameter into
 *		 a newly allocated memory space taking n characters
 *	 from the second string
 * @s1: The string to be put first in the new string
 * @s2: The string to be put second in the new string
 * @n: The number of characters to be taken
 *	 from the second string, if n is greater than
 *	 or equal the length of s2 then use the entire string s2
 *
 * Return: A pointer to the concatenated string, NULL otherwise
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1, len2;
	char *cat_str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;

	cat_str = malloc((len1 + n + 1) * sizeof(char));
	if (cat_str == 0)
		return (cat_str);

	for (i = 0; (i < len1) || (i < n); i++)
	{
		if (i < len1)
			*(cat_str + i) = *(s1 + i);
		if (i < n)
			*(cat_str + len1 + i) = *(s2 + i);
	}

	*(cat_str + len1 + n) = '\0';

	return (cat_str);
}

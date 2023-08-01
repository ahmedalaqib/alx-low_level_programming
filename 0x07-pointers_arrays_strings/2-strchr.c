#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: The first occurance of the character c in the
 *	 string s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	
	return (NULL);
}

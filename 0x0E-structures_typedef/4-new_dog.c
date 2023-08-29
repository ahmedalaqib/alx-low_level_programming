#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The string to calculate its length
 * Return: The length of the string,
 *	 if NULL or empty string is passed - 0
 **/

int _strlen(char *str)
{
	int len = 0;

	while (str && *str++)
		len++;

	return (len);
}

/**
 * _strcpy - Copy the source string int a given destination
 * @dest: The place to store the copied string;
 * @src: The string to be copied
 * Return: A pointer to the copied string
 **/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src && src[index])
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 * Return: A variable of type dog_t,
 *	 or NULL if it fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = _strlen(name), owner_len = _strlen(owner);
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc((name_len + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}

#ifndef DOG_H
#define DOG_H


/**
 * struct dog - This struct provide some of the dogs details
 *		 such as there names, age and the owner name
 * @name: The name of the dog
 * @owner: The owner of the dog
 * @age : The age of the dog
 *
 **/
struct dog
{
		char *name;
			char *owner;
				float age;
};

/**
 * dog_t - Define a new type called dog_t for type struct dog
 **/
typedef struct dog dog_t;

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The variable to be initialized
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 *
 * Return: void
 *
 **/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Initialize a variable of type struct dog
 * @d: The struct of type dog to print its content
 *
 * Return: void
 **/
void print_dog(struct dog *d);

/**
 * new_dog - Create a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 *
 * Return: A variable of type dog_t,
 *	 or NULL if it fails
 **/
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free the memory allocated for dog
 * @d: The dog to be freed
 *
 * Return: void
 **/
void free_dog(dog_t *d);


#endif

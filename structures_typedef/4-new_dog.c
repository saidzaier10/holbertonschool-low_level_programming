#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length = 0, owner_length = 0;
	int index;

	while (name[name_length] != '\0')
		name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_length + 1);
	new_dog->owner = malloc(owner_length + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	index = 0;
	while (name[index] != '\0')
	{
		new_dog->name[index] = name[index];
		index++;
	}
	new_dog->name[index] = '\0';

	index = 0;
	while (owner[index] != '\0')
	{
		new_dog->owner[index] = owner[index];
		index++;
	}
	new_dog->owner[index] = '\0';
	new_dog->age = age;
return (new_dog);
}


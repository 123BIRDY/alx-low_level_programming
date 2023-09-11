#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	/* If memory fails return null */
	if (new == NULL)
		return (NULL);
	/* Allocate memory for the new name string */
	new->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Allocate memory for the owner string */
	new->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	/* Move the name and owner strings to the new struct */
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age; /* Set the age of the new dog */

	return (new);
}

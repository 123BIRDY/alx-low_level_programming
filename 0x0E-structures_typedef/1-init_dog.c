#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the variable to format
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Is the variable null or not */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		/* Assign the elements to the provided values */
	}
}

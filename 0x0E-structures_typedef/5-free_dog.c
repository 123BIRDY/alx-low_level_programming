#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to the struct dog to free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL) /* Is the variable null or not */
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

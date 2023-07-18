#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strcpy - function that copies the string
 * @dest: buffer in which string is copied to
 * @src: string to copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}

/**
 * _strlen - function that returns the length of the string
 * @s: string to consider
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - function that creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fresh_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	fresh_dog = malloc(sizeof(dog_t));
	if (fresh_dog == NULL)
		return (NULL);
	fresh_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (fresh_dog->name == NULL)
	{
		free(fresh_dog);
		return (NULL);
	}
	fresh_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (fresh_dog->owner == NULL)
	{
		free(fresh_dog);
		free(fresh_dog->name);
		return (NULL);
	}
	_strcpy(fresh_dog->name, name);
	_strcpy(fresh_dog->owner, owner);
	fresh_dog->age = age;

	return (fresh_dog);
}

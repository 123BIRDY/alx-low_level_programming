#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure type
 * Description: Define a new type struct dog with three info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function to print dog basic info
 * @name: pointer to character
 * @age: float type
 * @owner: pointer to character
 * Description: structure for longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - fuction for typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

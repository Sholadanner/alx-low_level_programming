#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: first member
 * @age: second member
 * @owner: third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

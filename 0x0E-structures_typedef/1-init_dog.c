#include "dog.h"
#include <stdio.h>

/**
 * init_dog - funtion to derefernce a pointer to a stuct
 * struct dog - this stuct contains three members
 * @name: first member
 * @age: second member
 * @owner: third member
 * @d: pointer that points to the address of the struct
 *
 * Description: this function aims to derefernce a pointer
 * the members of the stuct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

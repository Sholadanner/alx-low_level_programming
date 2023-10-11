#include "dog.h"
#include <stdio.h>

/**
 * print_dog - funtion that prints arguments contents
 * struct dog - this stuct has only one member
 * @d: a pointer poining to the address of the stuct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

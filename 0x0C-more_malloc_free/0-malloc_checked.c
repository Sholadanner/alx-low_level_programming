#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checking if space was allocated
 * successfully
 * @b: the value that memory needs to be allocated for
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}

#include "main.h"

/**
 * swap_int - swaping pointers
 *
 * Return: void
 *
 * @a: value 1
 *
 * @b: value 2
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

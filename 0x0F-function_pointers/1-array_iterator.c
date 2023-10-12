#include "function_pointers.h"

/**
 * array_iterator - performing an action on each iteration
 * of an array
 * @array: the array to which the action is to be performed on
 * @size_t: the size of the array
 * action: the pointer to the action that will be carried out
 * on each iteration of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

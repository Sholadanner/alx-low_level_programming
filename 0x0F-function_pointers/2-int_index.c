#include "function_pointers.h"

/**
 * int_index - fuction that searches for an interger
 * @array: the array the element to be examined
 * @size: the size of the array
 * @cmp: pointer to a function that compares elements
 * inside the array
 * Return: to be determined
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return -1;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

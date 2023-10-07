#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - this function is used to set a specific
 * block of memory to a specific value
 * @ptr: pointer to the memory block we want to set
 * to a specific value
 * @value: the value we want to set the block of memory to
 * @size: the size of the value we want to set the block
 * of memory to
 * Return: void
 */

void _memset(void *ptr, int value, size_t size)
{
	size_t i;
	unsigned char *byteptr;

	byteptr = (unsigned char *)ptr;
	for (i = 0; i < size; i++)
		byteptr[i] = (unsigned char)value;
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory fo an array
 * @nmemb: number of byte to set the specific value to
 * @size: the size of bytes in each element
 * Return: to be determined
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);
	return (arr);
}

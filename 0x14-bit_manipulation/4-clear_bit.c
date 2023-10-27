#include "main.h"

/**
 * clear_bit - function to clear bits
 * @n: number
 * @index: index
 * Return: to be determined
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

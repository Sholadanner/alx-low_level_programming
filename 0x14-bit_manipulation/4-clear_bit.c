#include "main.h"

/**
 * clear_bit - prototype that sets the value of a bit
 * @n: number of set
 * @index: index of the number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

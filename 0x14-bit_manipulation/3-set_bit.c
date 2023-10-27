#include "main.h"

/**
 * get_bit - return value of a bit
 * @n: number to be evaluated
 * @index: to check the bit
 * Return : to be determined
 */

 int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof*(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n *n | set;
	return (1);
}

#include "main.h"

/**
 * get_bit - this function returns the value of an index
 * @n: number o checkin bits
 * @index: index at which to check bit
 * Return: to be determined
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}

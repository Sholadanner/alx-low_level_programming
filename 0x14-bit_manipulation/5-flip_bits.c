#include "main.h"

/**
 * flip_bits - checks the number of bits to change
 * @n: first number
 * @m: second number
 * Return: to be determined
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int select = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = select >> i;
		if (present & 1)
			count++;
	}
	return (count);
}

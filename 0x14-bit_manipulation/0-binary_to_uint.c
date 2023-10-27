#include "main.h"

/**
 * binary_to_uint - function that converts binary to
 * an unsigned int
 * @b: pointer to a string of 0 or 1 chars
 * Return: to be determined
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		number <<= 1;
		if (b[i] == '1')
			number = number + 1;
	}
	return (number);
}
